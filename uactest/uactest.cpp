#include "uactest.h"
#include "simulation.h"
#include "uac.h"
#include <QtConcurrent/QtConcurrentRun>

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);

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

	// Set UAC and options
	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	bool overrideCdr = ui.overrideConfirm->isChecked();
	bool module = ui.moduleCheck->isChecked();
	bool module_rank = ui.moduleRank->value();
	bool fastfire = ui.fastfireCheck->isChecked();

	s.setUac(uac);
	s.setModule(module);
	s.setModuleRank(module_rank);
	s.setFastFire(fastfire);

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
	ui.progressBar->setMaximum(1);
	ui.damageDisplay->setText(QString::number(s.getDamage()));
	ui.timeDisplay->setText(QString::number(s.getTime()));
	ui.dpsDisplay->setText(QString::number(s.getDps()));
	ui.calcButton->setEnabled(true);
}