#ifndef UACTEST_H
#define UACTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_uactest.h"
#include "simulation.h"
#include <random>
#include <QFutureWatcher>

class uactest : public QMainWindow
{
	Q_OBJECT

public:
	uactest(QWidget *parent = 0);
	~uactest();

private:
	Ui::uactestClass ui;
	bool module_locked;

	std::default_random_engine rng;
	std::uniform_real_distribution<float> dist{ 0.0, 1.0 };

	QFutureWatcher<void> theoryWatcher;
	QFutureWatcher<void> simulationWatcher;

	Simulation s;

	private slots:
	void checkParametersValid();
	void updateUiState();

	void onCalcButtonClicked();
	void simulationComplete();

	void displaySimulationResults();
	void displayTheoreticalResults();
};

#endif // UACTEST_H
