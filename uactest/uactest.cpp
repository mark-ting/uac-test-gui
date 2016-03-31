#include "uactest.h"
#include "simulation.h"
#include "uac.h"

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);
}

uactest::~uactest()
{
}

void uactest::onCalcButtonClicked() {
	std::shared_ptr<Uac> uac = selectUac(ui.uacSelect->currentIndex());
	bool module = ui.moduleCheck->checkState();
	bool fastfire = ui.fastfireCheck->checkState();

	s.setUac(uac);
	s.setModule(module);
	s.setFastFire(fastfire);

	s.run(ui.cycleCount->value());

	ui.damageDisplay->setText(QString::number(s.getDamage()));
	ui.timeDisplay->setText(QString::number(s.getTime()));
	ui.dpsDisplay->setText(QString::number(s.getDps()));
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