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

void uactest::onCalcButtonClicked() {
	ui.calcButton->setEnabled(false);
	ui.progressBar->setMaximum(0);

	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	bool module = ui.moduleCheck->checkState();
	bool fastfire = ui.fastfireCheck->checkState();

	s.setUac(uac);
	s.setModule(module);
	s.setFastFire(fastfire);

	QFuture<void> future = QtConcurrent::run(&this->s, &Simulation::run, ui.cycleCount->value());
	FutureWatcher.setFuture(future);
	connect(&FutureWatcher, SIGNAL(finished()), this, SLOT(calcComplete()));
}

void uactest::checkModuleValid(int index) {
	if (index == 1) {
		ui.moduleCheck->setCheckState(Qt::CheckState::Unchecked);
		ui.moduleCheck->setEnabled(false);
	}
	else {
		ui.moduleCheck->setEnabled(true);
	}
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