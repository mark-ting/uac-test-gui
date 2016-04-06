#include "uactest.h"
#include "simulation.h"
#include "uac.h"
#include <QtConcurrent/QtConcurrentRun>

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);
	module_locked = false;

	ui.progressBar->setMinimum(0);
	ui.progressBar->setMaximum(1);
}

uactest::~uactest()
{
}

void uactest::checkModuleEnabled(int index) {
	if (index == 1) {
		ui.moduleCheck->setCheckState(Qt::CheckState::Unchecked);
		ui.moduleCheck->setEnabled(false);
	}
	else {
		ui.moduleCheck->setEnabled(true);
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

void uactest::onToggleCdrOverride(bool checked) {
	if (checked) {
		ui.overrideCdrValue->setEnabled(true);
		ui.fastfireCheck->setEnabled(false);
		ui.moduleCheck->setEnabled(false);
		ui.moduleRank->setEnabled(false);
	}
	else {
		ui.overrideCdrValue->setEnabled(false);
		ui.fastfireCheck->setEnabled(true);
		ui.moduleCheck->setEnabled(true);
		ui.moduleRank->setEnabled(true);
	}
}

void uactest::onCalcButtonClicked() {
	// Disable interaction while running
	ui.calcButton->setEnabled(false);
	ui.progressBar->setMaximum(0);

	// Fetch UAC and options
	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	
	bool override_cdr = ui.overrideConfirm->isChecked();
	double override_cdr_value = ui.overrideCdrValue->value();

	bool module = ui.moduleCheck->isChecked();
	int module_rank = ui.moduleRank->value();
	bool fastfire = ui.fastfireCheck->isChecked();

	// Apply to simulation
	s.setUac(uac);
	s.overrideCdr(override_cdr);

	if (override_cdr) {
		s.setCdrValue(override_cdr_value / 100);
	}
	else {
		s.setModule(module);
		s.setModuleRank(module_rank);
		s.setFastFire(fastfire);
	}

	QFuture<void> future = QtConcurrent::run(&this->s, &Simulation::run, ui.cycleCount->value());
	FutureWatcher.setFuture(future);
	connect(&FutureWatcher, SIGNAL(finished()), this, SLOT(calcComplete()));
}

void uactest::checkCalcReady()
{
	if (ui.cycleCount->value() > 0 && ui.uacSelect->currentIndex() > 0) {
		ui.calcButton->setEnabled(true);
	}
	else {
		ui.calcButton->setEnabled(false);
	}
}

void uactest::calcComplete()
{
	QApplication::beep();
	QApplication::alert(this, 0);
	ui.progressBar->setMaximum(1);
	ui.damageDisplay->setText(QString::number(s.getDamage()));
	ui.timeDisplay->setText(QString::number(s.getTime()));
	ui.dpsDisplay->setText(QString::number(s.getDps()));
	ui.calcButton->setEnabled(true);
}