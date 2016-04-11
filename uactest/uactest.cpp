#include "uactest.h"
#include <QtConcurrent/QtConcurrentRun>
#include <QDesktopServices>
#include <QUrl>

uactest::uactest(QWidget *parent)
	: QMainWindow(parent)
{
	loadUacs();
	ui.setupUi(this);

	connect(&theoryWatcher, SIGNAL(finished()), this, SLOT(theoryComplete()));
	connect(&simulationWatcher, SIGNAL(finished()), this, SLOT(simulationComplete()));
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
	bool cdr_override = ui.overrideCdrCheck->isChecked();
	bool jam_override = ui.overrideJamCheck->isChecked();

	// Specific Toggles
	bool fastfire_enabled = !cdr_override;

	bool module_enabled = !cdr_override && !(ui.uacSelect->currentIndex() == 1);  // UAC2 has no module
	bool module_rank_enabled = module_enabled && ui.moduleCheck->isChecked();;

	bool general_quirk_enabled = !cdr_override;
	bool general_quirk_editable = general_quirk_enabled && ui.generalCooldownCheck->isChecked();

	bool uac_quirk_enabled = !cdr_override;
	bool uac_quirk_editable = uac_quirk_enabled && ui.uacCooldownCheck->isChecked();

	bool jam_quirk_enabled = !jam_override;
	bool jam_quirk_editable = jam_quirk_enabled && ui.uacJamChanceCheck->isChecked();

	// Update UI Elements
	ui.fastfireCheck->setEnabled(fastfire_enabled);

	ui.moduleCheck->setEnabled(module_enabled);
	ui.moduleRank->setEnabled(module_rank_enabled);

	ui.generalCooldownCheck->setEnabled(general_quirk_enabled);
	ui.generalCooldownValue->setEnabled(general_quirk_editable);

	ui.uacCooldownCheck->setEnabled(uac_quirk_enabled);
	ui.uacCooldownValue->setEnabled(uac_quirk_editable);

	ui.uacJamChanceCheck->setEnabled(jam_quirk_enabled);
	ui.uacJamChanceValue->setEnabled(jam_quirk_editable);

	ui.overrideCdrValue->setEnabled(cdr_override);
	ui.overrideJamValue->setEnabled(jam_override);
}

void uactest::onCalcButtonClicked() {
	// Disable interaction while running
	ui.calcButton->setEnabled(false);
	clearDisplays();

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

void uactest::clearDisplays()
{
	ui.tDamageDisplay->clear();
	ui.tTimeDisplay->clear();
	ui.tDpsDisplay->clear();
	ui.damageDisplay->clear();
	ui.timeDisplay->clear();
	ui.dpsDisplay->clear();
}

void uactest::showAbout()
{
	QDesktopServices::openUrl(QUrl("https://github.com/mat3049/uac-test-gui/", QUrl::TolerantMode));
}

void uactest::showLegal()
{
	QDesktopServices::openUrl(QUrl("https://github.com/mat3049/uac-test-gui/wiki/Legal", QUrl::TolerantMode));
}
