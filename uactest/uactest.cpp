#include "uactest.h"
#include <QtConcurrent/QtConcurrentRun>
#include <qdesktopservices.h>
#include <qurl.h>

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);
	module_locked = false;
	
	connect(ui.actionE_xit, SIGNAL(triggered()), this, SLOT(close()));

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

void uactest::updateUiState()
{
	// Override Flags
	bool cdr_override_enabled = ui.overrideCdrCheck->isChecked();
	bool jam_override_enabled = ui.overrideJamCheck->isChecked();

	// Specific Toggles
	bool fastfire_enabled;
	bool module_enabled;
	bool cdr_quirk_enabled;

	// UAC2 has no module
	if (ui.uacSelect->currentIndex() == 1) {
		module_enabled = false;
	}
	else {
		module_enabled = !cdr_override_enabled;
	}

	// Update UI elements for Cooldown
	ui.overrideCdrValue->setEnabled(cdr_override_enabled);
	ui.fastfireCheck->setEnabled(!cdr_override_enabled);
	ui.moduleCheck->setEnabled(module_enabled);
	ui.moduleRank->setEnabled(module_enabled);
	ui.generalCooldownCheck->setEnabled(!cdr_override_enabled);
	ui.generalCooldownValue->setEnabled(!cdr_override_enabled);
	ui.uacCooldownCheck->setEnabled(!cdr_override_enabled);
	ui.uacCooldownValue->setEnabled(!cdr_override_enabled);

	// Update UI elements for Jam Chance
	ui.overrideJamValue->setEnabled(jam_override_enabled);
	ui.uacJamChanceCheck->setEnabled(!jam_override_enabled);
	ui.uacJamChanceValue->setEnabled(!jam_override_enabled);
}

void uactest::onCalcButtonClicked() {
	// Disable interaction while running
	ui.calcButton->setEnabled(false);

	// Update with progress
	ui.progressBar->setMaximum(0);
	ui.statusBar->showMessage("Running...");

	// Fetch UAC and options
	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	int num_cycles = ui.cycleCount->value();

	bool override_cdr = ui.overrideCdrCheck->isChecked();
	bool override_jam = ui.overrideJamCheck->isChecked();

	// Values entered in %
	double custom_cdr = ui.overrideCdrValue->value() / 100;
	double custom_jam = ui.overrideJamValue->value() / 100;

	bool fastfire = ui.fastfireCheck->isChecked();
	int module = ui.moduleCheck->isChecked() ? ui.moduleRank->value() : 0;

	// Values entered in %
	double ballistic_quirk = ui.generalCooldownValue->value() / 100;
	double uac_quirk = ui.uacCooldownValue->value() / 100;
	double jam_quirk = ui.generalCooldownValue->value() / 100;

	// Pass values to simulation
	s.overrideCdr(override_cdr);
	s.overrideJam(override_jam);

	if (override_cdr) {
		s.setCdrValue(custom_cdr);
	}
	else {
		s.setFastFire(fastfire);
		s.setModule(module);
		s.setBallisticQuirk(ballistic_quirk);
		s.setUacQuirk(uac_quirk);
	}

	if (override_jam) {
		s.setJamValue(custom_jam);
	}
	else {
		s.setJamQuirk(jam_quirk);
	}

	// Calculate theoretical results and update
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
	ui.statusBar->showMessage("Complete!");
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