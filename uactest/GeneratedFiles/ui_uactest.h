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
    QVBoxLayout *verticalLayout;
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
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *timeDisplayLabel;
    QLabel *timeDisplay;
    QLabel *damageDisplayLabel;
    QLabel *damageDisplay;
    QLabel *dpsDisplayLabel;
    QLabel *dpsDisplay;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

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
        calcButton->setGeometry(QRect(20, 180, 221, 131));
        cooldownBox = new QGroupBox(centralWidget);
        cooldownBox->setObjectName(QStringLiteral("cooldownBox"));
        cooldownBox->setGeometry(QRect(350, 20, 271, 141));
        cooldownBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(cooldownBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fastfireCheck = new QCheckBox(cooldownBox);
        fastfireCheck->setObjectName(QStringLiteral("fastfireCheck"));

        verticalLayout->addWidget(fastfireCheck);

        moduleCheck = new QCheckBox(cooldownBox);
        moduleCheck->setObjectName(QStringLiteral("moduleCheck"));

        verticalLayout->addWidget(moduleCheck);


        horizontalLayout->addLayout(verticalLayout);

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

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 180, 361, 131));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        timeDisplayLabel = new QLabel(layoutWidget);
        timeDisplayLabel->setObjectName(QStringLiteral("timeDisplayLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, timeDisplayLabel);

        timeDisplay = new QLabel(layoutWidget);
        timeDisplay->setObjectName(QStringLiteral("timeDisplay"));
        timeDisplay->setFrameShape(QFrame::Box);
        timeDisplay->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(0, QFormLayout::FieldRole, timeDisplay);

        damageDisplayLabel = new QLabel(layoutWidget);
        damageDisplayLabel->setObjectName(QStringLiteral("damageDisplayLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, damageDisplayLabel);

        damageDisplay = new QLabel(layoutWidget);
        damageDisplay->setObjectName(QStringLiteral("damageDisplay"));
        damageDisplay->setFrameShape(QFrame::Box);
        damageDisplay->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::FieldRole, damageDisplay);

        dpsDisplayLabel = new QLabel(layoutWidget);
        dpsDisplayLabel->setObjectName(QStringLiteral("dpsDisplayLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dpsDisplayLabel);

        dpsDisplay = new QLabel(layoutWidget);
        dpsDisplay->setObjectName(QStringLiteral("dpsDisplay"));
        dpsDisplay->setFrameShape(QFrame::Box);
        dpsDisplay->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::FieldRole, dpsDisplay);

        uactestClass->setCentralWidget(centralWidget);
        calcButton->raise();
        cooldownBox->raise();
        layoutWidget->raise();
        loadoutBox->raise();
        menuBar = new QMenuBar(uactestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 935, 38));
        uactestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(uactestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        uactestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(uactestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        uactestClass->setStatusBar(statusBar);
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
        calcButton->setText(QApplication::translate("uactestClass", "Calculate!", 0));
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
