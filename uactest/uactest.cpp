#include "uactest.h"
#include <QtConcurrent/QtConcurrentRun>

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);
	module_locked = false;

	connect(&theoryWatcher, SIGNAL(finished()), this, SLOT(theoryComplete()));
	connect(&simulationWatcher, SIGNAL(finished()), this, SLOT(simulationComplete()));

	ui.progressBar->setMinimum(0);
	ui.progressBar->setMaximum(1);
}

uactest::~uactest()
{
}

void uactest::checkParametersValid()
{
	if (ui.cycleCount->value() > 0 && ui.uacSelect->currentIndex() > 0) {
		ui.calcButton->setEnabled(true);
	}
	else {
		ui.calcButton->setEnabled(false);
	}
}

void uactest::updateModifierUiState()
{
	bool module_enabled;
	bool fastfire_enabled;
	bool cdr_override_enabled;

	// Override disables all modifiers
	if (ui.overrideConfirm->isChecked()) {
		module_enabled = false;
		fastfire_enabled = false;
		cdr_override_enabled = true;
	}
	else {
		module_enabled = true;
		fastfire_enabled = true;
		cdr_override_enabled = false;

		// UAC/2 has no module
		if (ui.uacSelect->currentIndex() == 1) {
			module_enabled = false;
		}
	}

	// Update UI elements
	ui.moduleCheck->setEnabled(module_enabled);
	ui.moduleRank->setEnabled(module_enabled);
	ui.fastfireCheck->setEnabled(fastfire_enabled);
	ui.overrideCdrValue->setEnabled(cdr_override_enabled);
}

void uactest::onCalcButtonClicked() {
	// Disable interaction while running
	ui.calcButton->setEnabled(false);
	ui.progressBar->setMaximum(0);

	// Fetch UAC and options
	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	int num_cycles = ui.cycleCount->value();

	bool override_cdr = ui.overrideConfirm->isChecked();
	double override_cdr_value = ui.overrideCdrValue->value();

	bool module = ui.moduleCheck->isChecked();
	int module_rank = ui.moduleRank->value();
	bool fastfire = ui.fastfireCheck->isChecked();

	// Pass values to simulation
	s.overrideCdr(override_cdr);

	if (override_cdr) {
		s.setCdrValue(override_cdr_value / 100);
	}
	else {
		s.setModule(module);
		s.setModuleRank(module_rank);
		s.setFastFire(fastfire);
	}

	// Calculate theortical results and update
	s.calcTheoretical(uac, num_cycles);
	displayTheoreticalResults();

	// Run simulation with UAC and cycle count
	QFuture<void> simulation = QtConcurrent::run(&this->s, &Simulation::run, uac, num_cycles);
	simulationWatcher.setFuture(simulation);
}

void uactest::simulationComplete()
{
	QApplication::beep();
	QApplication::alert(this, 0);
	displaySimulationResults();
	ui.progressBar->setMaximum(1);
	ui.calcButton->setEnabled(true);
}

void uactest::displayTheoreticalResults()
{
	ui.tDamageDisplay->setText(QString::number(s.theoryDamage()));
	ui.tTimeDisplay->setText(QString::number(s.theoryTime()));
	ui.tDpsDisplay->setText(QString::number(s.theoryDps()));
}

void uactest::displaySimulationResults()
{
	ui.damageDisplay->setText(QString::number(s.getDamage()));
	ui.timeDisplay->setText(QString::number(s.getTime()));
	ui.dpsDisplay->setText(QString::number(s.getDps()));
}