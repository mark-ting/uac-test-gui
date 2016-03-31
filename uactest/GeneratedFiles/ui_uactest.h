/********************************************************************************
** Form generated from reading UI file 'uactest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UACTEST_H
#define UI_UACTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uactestClass
{
public:
    QWidget *centralWidget;
    QPushButton *calcButton;
    QGroupBox *cooldownBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *cooldownLayout;
    QCheckBox *fastfireCheck;
    QCheckBox *moduleCheck;
    QGroupBox *loadoutBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *loadoutLayout;
    QVBoxLayout *uacSelectLayout;
    QLabel *uacSelectLabel;
    QComboBox *uacSelect;
    QVBoxLayout *cycleCountLayout;
    QLabel *cycleCountLabel;
    QSpinBox *cycleCount;
    QProgressBar *progressBar;
    QGroupBox *resultBox;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *resultLayout;
    QLabel *timeDisplayLabel;
    QLabel *timeDisplay;
    QLabel *damageDisplayLabel;
    QLabel *damageDisplay;
    QLabel *dpsDisplayLabel;
    QLabel *dpsDisplay;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *uactestClass)
    {
        if (uactestClass->objectName().isEmpty())
            uactestClass->setObjectName(QStringLiteral("uactestClass"));
        uactestClass->resize(935, 784);
        centralWidget = new QWidget(uactestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calcButton = new QPushButton(centralWidget);
        calcButton->setObjectName(QStringLiteral("calcButton"));
        calcButton->setEnabled(false);
        calcButton->setGeometry(QRect(20, 180, 221, 181));
        cooldownBox = new QGroupBox(centralWidget);
        cooldownBox->setObjectName(QStringLiteral("cooldownBox"));
        cooldownBox->setGeometry(QRect(350, 20, 271, 141));
        cooldownBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(cooldownBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cooldownLayout = new QVBoxLayout();
        cooldownLayout->setSpacing(6);
        cooldownLayout->setObjectName(QStringLiteral("cooldownLayout"));
        fastfireCheck = new QCheckBox(cooldownBox);
        fastfireCheck->setObjectName(QStringLiteral("fastfireCheck"));

        cooldownLayout->addWidget(fastfireCheck);

        moduleCheck = new QCheckBox(cooldownBox);
        moduleCheck->setObjectName(QStringLiteral("moduleCheck"));

        cooldownLayout->addWidget(moduleCheck);


        horizontalLayout->addLayout(cooldownLayout);

        loadoutBox = new QGroupBox(centralWidget);
        loadoutBox->setObjectName(QStringLiteral("loadoutBox"));
        loadoutBox->setGeometry(QRect(20, 20, 311, 141));
        verticalLayout_2 = new QVBoxLayout(loadoutBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        loadoutLayout = new QHBoxLayout();
        loadoutLayout->setSpacing(6);
        loadoutLayout->setObjectName(QStringLiteral("loadoutLayout"));
        uacSelectLayout = new QVBoxLayout();
        uacSelectLayout->setSpacing(6);
        uacSelectLayout->setObjectName(QStringLiteral("uacSelectLayout"));
        uacSelectLabel = new QLabel(loadoutBox);
        uacSelectLabel->setObjectName(QStringLiteral("uacSelectLabel"));

        uacSelectLayout->addWidget(uacSelectLabel);

        uacSelect = new QComboBox(loadoutBox);
        uacSelect->setObjectName(QStringLiteral("uacSelect"));

        uacSelectLayout->addWidget(uacSelect);


        loadoutLayout->addLayout(uacSelectLayout);

        cycleCountLayout = new QVBoxLayout();
        cycleCountLayout->setSpacing(6);
        cycleCountLayout->setObjectName(QStringLiteral("cycleCountLayout"));
        cycleCountLabel = new QLabel(loadoutBox);
        cycleCountLabel->setObjectName(QStringLiteral("cycleCountLabel"));

        cycleCountLayout->addWidget(cycleCountLabel);

        cycleCount = new QSpinBox(loadoutBox);
        cycleCount->setObjectName(QStringLiteral("cycleCount"));
        cycleCount->setMinimum(10000);
        cycleCount->setMaximum(100000000);

        cycleCountLayout->addWidget(cycleCount);


        loadoutLayout->addLayout(cycleCountLayout);

        loadoutLayout->setStretch(0, 1);
        loadoutLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(loadoutLayout);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 380, 601, 27));
        progressBar->setMaximum(1);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        resultBox = new QGroupBox(centralWidget);
        resultBox->setObjectName(QStringLiteral("resultBox"));
        resultBox->setGeometry(QRect(260, 180, 361, 181));
        horizontalLayout_2 = new QHBoxLayout(resultBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        resultLayout = new QFormLayout();
        resultLayout->setSpacing(6);
        resultLayout->setObjectName(QStringLiteral("resultLayout"));
        resultLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        resultLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        resultLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        resultLayout->setHorizontalSpacing(12);
        resultLayout->setVerticalSpacing(12);
        resultLayout->setContentsMargins(-1, -1, 0, -1);
        timeDisplayLabel = new QLabel(resultBox);
        timeDisplayLabel->setObjectName(QStringLiteral("timeDisplayLabel"));

        resultLayout->setWidget(0, QFormLayout::LabelRole, timeDisplayLabel);

        timeDisplay = new QLabel(resultBox);
        timeDisplay->setObjectName(QStringLiteral("timeDisplay"));
        timeDisplay->setFrameShape(QFrame::Box);
        timeDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(0, QFormLayout::FieldRole, timeDisplay);

        damageDisplayLabel = new QLabel(resultBox);
        damageDisplayLabel->setObjectName(QStringLiteral("damageDisplayLabel"));

        resultLayout->setWidget(1, QFormLayout::LabelRole, damageDisplayLabel);

        damageDisplay = new QLabel(resultBox);
        damageDisplay->setObjectName(QStringLiteral("damageDisplay"));
        damageDisplay->setFrameShape(QFrame::Box);
        damageDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(1, QFormLayout::FieldRole, damageDisplay);

        dpsDisplayLabel = new QLabel(resultBox);
        dpsDisplayLabel->setObjectName(QStringLiteral("dpsDisplayLabel"));

        resultLayout->setWidget(2, QFormLayout::LabelRole, dpsDisplayLabel);

        dpsDisplay = new QLabel(resultBox);
        dpsDisplay->setObjectName(QStringLiteral("dpsDisplay"));
        dpsDisplay->setFrameShape(QFrame::Box);
        dpsDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(2, QFormLayout::FieldRole, dpsDisplay);


        horizontalLayout_2->addLayout(resultLayout);

        uactestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(uactestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        uactestClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(uactestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 935, 38));
        uactestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(uactestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        uactestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
#ifndef QT_NO_SHORTCUT
        uacSelectLabel->setBuddy(uacSelect);
        cycleCountLabel->setBuddy(cycleCount);
#endif // QT_NO_SHORTCUT

        retranslateUi(uactestClass);
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(checkModuleValid(int)));
        QObject::connect(cycleCount, SIGNAL(valueChanged(int)), uactestClass, SLOT(checkCalcReady()));
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(checkCalcReady()));
        QObject::connect(calcButton, SIGNAL(pressed()), uactestClass, SLOT(onCalcButtonClicked()));

        QMetaObject::connectSlotsByName(uactestClass);
    } // setupUi

    void retranslateUi(QMainWindow *uactestClass)
    {
        uactestClass->setWindowTitle(QApplication::translate("uactestClass", "UAC Test", 0));
#ifndef QT_NO_TOOLTIP
        calcButton->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>FOR SCIENCE!</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        calcButton->setText(QApplication::translate("uactestClass", "For Science!", 0));
        cooldownBox->setTitle(QApplication::translate("uactestClass", "Cooldown Modifiers", 0));
#ifndef QT_NO_TOOLTIP
        fastfireCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Enables Fast Fire.</p><p>This results in 5% CDR.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fastfireCheck->setText(QApplication::translate("uactestClass", "Fast Fire (+5%)", 0));
#ifndef QT_NO_TOOLTIP
        moduleCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Enables UAC Cooldown Module.</p><p>This assumes a Rank 5 module, which results in 12% CDR.</p><p>(Note: disabled for UAC2)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        moduleCheck->setText(QApplication::translate("uactestClass", "CD Module (+12%)", 0));
        loadoutBox->setTitle(QApplication::translate("uactestClass", "Loadout", 0));
        uacSelectLabel->setText(QApplication::translate("uactestClass", "UAC:", 0));
        uacSelect->clear();
        uacSelect->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("uactestClass", "2", 0)
         << QApplication::translate("uactestClass", "5", 0)
         << QApplication::translate("uactestClass", "10", 0)
         << QApplication::translate("uactestClass", "20", 0)
        );
#ifndef QT_NO_TOOLTIP
        uacSelect->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>UAC to test.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cycleCountLabel->setText(QApplication::translate("uactestClass", "Cycles", 0));
#ifndef QT_NO_TOOLTIP
        cycleCount->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Number of double-tap cycles to be tested over.</p><p>Min: 10000 (ensures accuracy)</p><p>Max: 100000000 (10<span style=\" vertical-align:super;\">8</span>; you may not want to go over 10<span style=\" vertical-align:super;\">7</span> anyways)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        progressBar->setFormat(QApplication::translate("uactestClass", "%p%", 0));
        resultBox->setTitle(QApplication::translate("uactestClass", "Results", 0));
        timeDisplayLabel->setText(QApplication::translate("uactestClass", "Total Time:", 0));
#ifndef QT_NO_TOOLTIP
        timeDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total time (in seconds) to complete all cycles, assuming perfect timing (no delay between cooldown and firing).</p><p><br/>Devnote: due to the way things are coded, it will actually be greater by (Cooldown) seconds, which matters... not much in the long run (10<span style=\" vertical-align:super;\">4</span>+ cycles).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        timeDisplay->setText(QApplication::translate("uactestClass", "time", 0));
        damageDisplayLabel->setText(QApplication::translate("uactestClass", "Total Damage:", 0));
#ifndef QT_NO_TOOLTIP
        damageDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total damage dealt over all cycles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        damageDisplay->setText(QApplication::translate("uactestClass", "damage", 0));
        dpsDisplayLabel->setText(QApplication::translate("uactestClass", "Final DPS:", 0));
#ifndef QT_NO_TOOLTIP
        dpsDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Average DPS over all cycles.</p><p>More simply: Total Damage / Total Time</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        dpsDisplay->setText(QApplication::translate("uactestClass", "dps", 0));
    } // retranslateUi

};

namespace Ui {
    class uactestClass: public Ui_uactestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UACTEST_H
