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
#include <QtWidgets/QDoubleSpinBox>
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
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *modifierLayout;
    QCheckBox *fastfireCheck;
    QCheckBox *moduleCheck;
    QHBoxLayout *moduleLayout;
    QLabel *moduleRankLabel;
    QSpinBox *moduleRank;
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
    QLabel *damageDisplayLabel;
    QLabel *damageDisplay;
    QLabel *timeDisplayLabel;
    QLabel *timeDisplay;
    QLabel *dpsDisplayLabel;
    QLabel *dpsDisplay;
    QGroupBox *theoryBox;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *theoryLayout;
    QLabel *tDamageDisplayLabel;
    QLabel *tTimeDisplayLabel;
    QLabel *tTimeDisplay;
    QLabel *tDpsDisplayLabel;
    QLabel *tDpsDisplay;
    QLabel *tDamageDisplay;
    QGroupBox *overrideCdrBox;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *overrideCdrLayout;
    QCheckBox *overrideConfirm;
    QVBoxLayout *overrideCdrValueLayout;
    QLabel *overrideCdrValueLabel;
    QDoubleSpinBox *overrideCdrValue;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *uactestClass)
    {
        if (uactestClass->objectName().isEmpty())
            uactestClass->setObjectName(QStringLiteral("uactestClass"));
        uactestClass->resize(1020, 540);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uactestClass->sizePolicy().hasHeightForWidth());
        uactestClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(uactestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calcButton = new QPushButton(centralWidget);
        calcButton->setObjectName(QStringLiteral("calcButton"));
        calcButton->setEnabled(false);
        calcButton->setGeometry(QRect(20, 220, 231, 171));
        cooldownBox = new QGroupBox(centralWidget);
        cooldownBox->setObjectName(QStringLiteral("cooldownBox"));
        cooldownBox->setGeometry(QRect(340, 20, 351, 180));
        cooldownBox->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(cooldownBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        modifierLayout = new QVBoxLayout();
        modifierLayout->setSpacing(6);
        modifierLayout->setObjectName(QStringLiteral("modifierLayout"));
        fastfireCheck = new QCheckBox(cooldownBox);
        fastfireCheck->setObjectName(QStringLiteral("fastfireCheck"));

        modifierLayout->addWidget(fastfireCheck);

        moduleCheck = new QCheckBox(cooldownBox);
        moduleCheck->setObjectName(QStringLiteral("moduleCheck"));

        modifierLayout->addWidget(moduleCheck);


        verticalLayout_3->addLayout(modifierLayout);

        moduleLayout = new QHBoxLayout();
        moduleLayout->setSpacing(6);
        moduleLayout->setObjectName(QStringLiteral("moduleLayout"));
        moduleRankLabel = new QLabel(cooldownBox);
        moduleRankLabel->setObjectName(QStringLiteral("moduleRankLabel"));

        moduleLayout->addWidget(moduleRankLabel, 0, Qt::AlignHCenter);

        moduleRank = new QSpinBox(cooldownBox);
        moduleRank->setObjectName(QStringLiteral("moduleRank"));
        moduleRank->setLayoutDirection(Qt::LeftToRight);
        moduleRank->setAlignment(Qt::AlignCenter);
        moduleRank->setMinimum(1);
        moduleRank->setMaximum(5);

        moduleLayout->addWidget(moduleRank);


        verticalLayout_3->addLayout(moduleLayout);

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

        uacSelectLayout->addWidget(uacSelectLabel, 0, Qt::AlignBottom);

        uacSelect = new QComboBox(loadoutBox);
        uacSelect->setObjectName(QStringLiteral("uacSelect"));

        uacSelectLayout->addWidget(uacSelect);


        loadoutLayout->addLayout(uacSelectLayout);

        cycleCountLayout = new QVBoxLayout();
        cycleCountLayout->setSpacing(6);
        cycleCountLayout->setObjectName(QStringLiteral("cycleCountLayout"));
        cycleCountLabel = new QLabel(loadoutBox);
        cycleCountLabel->setObjectName(QStringLiteral("cycleCountLabel"));

        cycleCountLayout->addWidget(cycleCountLabel, 0, Qt::AlignBottom);

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
        progressBar->setGeometry(QRect(20, 400, 981, 27));
        progressBar->setMaximum(1);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        resultBox = new QGroupBox(centralWidget);
        resultBox->setObjectName(QStringLiteral("resultBox"));
        resultBox->setGeometry(QRect(260, 210, 361, 181));
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
        damageDisplayLabel = new QLabel(resultBox);
        damageDisplayLabel->setObjectName(QStringLiteral("damageDisplayLabel"));

        resultLayout->setWidget(0, QFormLayout::LabelRole, damageDisplayLabel);

        damageDisplay = new QLabel(resultBox);
        damageDisplay->setObjectName(QStringLiteral("damageDisplay"));
        damageDisplay->setFrameShape(QFrame::Box);
        damageDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(0, QFormLayout::FieldRole, damageDisplay);

        timeDisplayLabel = new QLabel(resultBox);
        timeDisplayLabel->setObjectName(QStringLiteral("timeDisplayLabel"));

        resultLayout->setWidget(1, QFormLayout::LabelRole, timeDisplayLabel);

        timeDisplay = new QLabel(resultBox);
        timeDisplay->setObjectName(QStringLiteral("timeDisplay"));
        timeDisplay->setFrameShape(QFrame::Box);
        timeDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(1, QFormLayout::FieldRole, timeDisplay);

        dpsDisplayLabel = new QLabel(resultBox);
        dpsDisplayLabel->setObjectName(QStringLiteral("dpsDisplayLabel"));

        resultLayout->setWidget(2, QFormLayout::LabelRole, dpsDisplayLabel);

        dpsDisplay = new QLabel(resultBox);
        dpsDisplay->setObjectName(QStringLiteral("dpsDisplay"));
        dpsDisplay->setFrameShape(QFrame::Box);
        dpsDisplay->setFrameShadow(QFrame::Sunken);

        resultLayout->setWidget(2, QFormLayout::FieldRole, dpsDisplay);


        horizontalLayout_2->addLayout(resultLayout);

        theoryBox = new QGroupBox(centralWidget);
        theoryBox->setObjectName(QStringLiteral("theoryBox"));
        theoryBox->setGeometry(QRect(640, 210, 360, 181));
        horizontalLayout_3 = new QHBoxLayout(theoryBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        theoryLayout = new QFormLayout();
        theoryLayout->setSpacing(6);
        theoryLayout->setObjectName(QStringLiteral("theoryLayout"));
        theoryLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        theoryLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        theoryLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        theoryLayout->setHorizontalSpacing(12);
        theoryLayout->setVerticalSpacing(12);
        theoryLayout->setContentsMargins(-1, -1, 0, -1);
        tDamageDisplayLabel = new QLabel(theoryBox);
        tDamageDisplayLabel->setObjectName(QStringLiteral("tDamageDisplayLabel"));

        theoryLayout->setWidget(0, QFormLayout::LabelRole, tDamageDisplayLabel);

        tTimeDisplayLabel = new QLabel(theoryBox);
        tTimeDisplayLabel->setObjectName(QStringLiteral("tTimeDisplayLabel"));

        theoryLayout->setWidget(1, QFormLayout::LabelRole, tTimeDisplayLabel);

        tTimeDisplay = new QLabel(theoryBox);
        tTimeDisplay->setObjectName(QStringLiteral("tTimeDisplay"));
        tTimeDisplay->setFrameShape(QFrame::Box);
        tTimeDisplay->setFrameShadow(QFrame::Sunken);

        theoryLayout->setWidget(1, QFormLayout::FieldRole, tTimeDisplay);

        tDpsDisplayLabel = new QLabel(theoryBox);
        tDpsDisplayLabel->setObjectName(QStringLiteral("tDpsDisplayLabel"));

        theoryLayout->setWidget(2, QFormLayout::LabelRole, tDpsDisplayLabel);

        tDpsDisplay = new QLabel(theoryBox);
        tDpsDisplay->setObjectName(QStringLiteral("tDpsDisplay"));
        tDpsDisplay->setFrameShape(QFrame::Box);
        tDpsDisplay->setFrameShadow(QFrame::Sunken);

        theoryLayout->setWidget(2, QFormLayout::FieldRole, tDpsDisplay);

        tDamageDisplay = new QLabel(theoryBox);
        tDamageDisplay->setObjectName(QStringLiteral("tDamageDisplay"));
        tDamageDisplay->setFrameShape(QFrame::Box);
        tDamageDisplay->setFrameShadow(QFrame::Sunken);

        theoryLayout->setWidget(0, QFormLayout::FieldRole, tDamageDisplay);


        horizontalLayout_3->addLayout(theoryLayout);

        overrideCdrBox = new QGroupBox(centralWidget);
        overrideCdrBox->setObjectName(QStringLiteral("overrideCdrBox"));
        overrideCdrBox->setGeometry(QRect(700, 20, 301, 181));
        verticalLayout = new QVBoxLayout(overrideCdrBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        overrideCdrLayout = new QVBoxLayout();
        overrideCdrLayout->setSpacing(6);
        overrideCdrLayout->setObjectName(QStringLiteral("overrideCdrLayout"));
        overrideConfirm = new QCheckBox(overrideCdrBox);
        overrideConfirm->setObjectName(QStringLiteral("overrideConfirm"));

        overrideCdrLayout->addWidget(overrideConfirm);

        overrideCdrValueLayout = new QVBoxLayout();
        overrideCdrValueLayout->setSpacing(6);
        overrideCdrValueLayout->setObjectName(QStringLiteral("overrideCdrValueLayout"));
        overrideCdrValueLabel = new QLabel(overrideCdrBox);
        overrideCdrValueLabel->setObjectName(QStringLiteral("overrideCdrValueLabel"));

        overrideCdrValueLayout->addWidget(overrideCdrValueLabel, 0, Qt::AlignBottom);

        overrideCdrValue = new QDoubleSpinBox(overrideCdrBox);
        overrideCdrValue->setObjectName(QStringLiteral("overrideCdrValue"));
        overrideCdrValue->setEnabled(false);
        overrideCdrValue->setDecimals(3);
        overrideCdrValue->setMaximum(100);
        overrideCdrValue->setSingleStep(0.1);

        overrideCdrValueLayout->addWidget(overrideCdrValue);


        overrideCdrLayout->addLayout(overrideCdrValueLayout);


        verticalLayout->addLayout(overrideCdrLayout);

        uactestClass->setCentralWidget(centralWidget);
        cooldownBox->raise();
        loadoutBox->raise();
        progressBar->raise();
        resultBox->raise();
        theoryBox->raise();
        overrideCdrBox->raise();
        calcButton->raise();
        statusBar = new QStatusBar(uactestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        uactestClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(uactestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 38));
        uactestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(uactestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        uactestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
#ifndef QT_NO_SHORTCUT
        moduleRankLabel->setBuddy(moduleRank);
        uacSelectLabel->setBuddy(uacSelect);
        cycleCountLabel->setBuddy(cycleCount);
        overrideCdrValueLabel->setBuddy(overrideCdrValue);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(uacSelect, cycleCount);
        QWidget::setTabOrder(cycleCount, fastfireCheck);
        QWidget::setTabOrder(fastfireCheck, moduleCheck);
        QWidget::setTabOrder(moduleCheck, moduleRank);
        QWidget::setTabOrder(moduleRank, overrideConfirm);
        QWidget::setTabOrder(overrideConfirm, overrideCdrValue);
        QWidget::setTabOrder(overrideCdrValue, calcButton);

        retranslateUi(uactestClass);
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(checkCalcReady()));
        QObject::connect(cycleCount, SIGNAL(valueChanged(int)), uactestClass, SLOT(checkCalcReady()));
        QObject::connect(calcButton, SIGNAL(clicked()), uactestClass, SLOT(onCalcButtonClicked()));
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(updateModifierUiState()));
        QObject::connect(overrideConfirm, SIGNAL(toggled(bool)), uactestClass, SLOT(updateModifierUiState()));

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
        fastfireCheck->setText(QApplication::translate("uactestClass", "Fast Fire (+5%):", 0));
#ifndef QT_NO_TOOLTIP
        moduleCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Enables UAC Cooldown Module.</p><p>Set Module Rank below.</p><p>(Note: disabled for UAC2)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        moduleCheck->setText(QApplication::translate("uactestClass", "CD Module (+2.4% / Rank):", 0));
        moduleRankLabel->setText(QApplication::translate("uactestClass", "Module Rank:", 0));
#ifndef QT_NO_TOOLTIP
        moduleRank->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Cooldown Module Rank.</p><p>Each rank increases the cooldown modifier by 2.4%:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 1: +2.4%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 2: +4.8%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 3: +7.2%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 4: +9.6%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 5: +12.0%</li></ul></body></html>", 0));
#endif // QT_NO_TOOLTIP
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
        cycleCountLabel->setText(QApplication::translate("uactestClass", "Cycles:", 0));
#ifndef QT_NO_TOOLTIP
        cycleCount->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Number of double-tap cycles to be tested over.</p><p>Min: 10000 (ensures accuracy)</p><p>Max: 100000000 (10<span style=\" vertical-align:super;\">8</span>; you may not want to go over 10<span style=\" vertical-align:super;\">7</span> anyways)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        progressBar->setFormat(QApplication::translate("uactestClass", "%p%", 0));
        resultBox->setTitle(QApplication::translate("uactestClass", "Results", 0));
        damageDisplayLabel->setText(QApplication::translate("uactestClass", "Total Damage:", 0));
#ifndef QT_NO_TOOLTIP
        damageDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total damage dealt over all cycles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        damageDisplay->setText(QApplication::translate("uactestClass", "damage", 0));
        timeDisplayLabel->setText(QApplication::translate("uactestClass", "Total Time:", 0));
#ifndef QT_NO_TOOLTIP
        timeDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total time (in seconds) to complete all cycles, assuming perfect timing (no delay between cooldown and firing).</p><p><br/>Devnote: due to the way things are coded, it will actually be greater by (Cooldown) seconds, which matters... not much in the long run (10<span style=\" vertical-align:super;\">4</span>+ cycles).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        timeDisplay->setText(QApplication::translate("uactestClass", "time", 0));
        dpsDisplayLabel->setText(QApplication::translate("uactestClass", "Final DPS:", 0));
#ifndef QT_NO_TOOLTIP
        dpsDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Average DPS over all cycles.</p><p>More simply: Total Damage / Total Time</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        dpsDisplay->setText(QApplication::translate("uactestClass", "dps", 0));
        theoryBox->setTitle(QApplication::translate("uactestClass", "Theoretical", 0));
        tDamageDisplayLabel->setText(QApplication::translate("uactestClass", "EV(Dmg)", 0));
        tTimeDisplayLabel->setText(QApplication::translate("uactestClass", "EV(Time)", 0));
#ifndef QT_NO_TOOLTIP
        tTimeDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total time (in seconds) to complete all cycles, assuming perfect timing (no delay between cooldown and firing).</p><p><br/>Devnote: due to the way things are coded, it will actually be greater by (Cooldown) seconds, which matters... not much in the long run (10<span style=\" vertical-align:super;\">4</span>+ cycles).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tTimeDisplay->setText(QApplication::translate("uactestClass", "time", 0));
        tDpsDisplayLabel->setText(QApplication::translate("uactestClass", "EV(DPS)", 0));
#ifndef QT_NO_TOOLTIP
        tDpsDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Average DPS over all cycles.</p><p>More simply: Total Damage / Total Time</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tDpsDisplay->setText(QApplication::translate("uactestClass", "dps", 0));
#ifndef QT_NO_TOOLTIP
        tDamageDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total damage dealt over all cycles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tDamageDisplay->setText(QApplication::translate("uactestClass", "damage", 0));
        overrideCdrBox->setTitle(QApplication::translate("uactestClass", "CDR Override", 0));
#ifndef QT_NO_TOOLTIP
        overrideConfirm->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Disables all Cooldown Modifiers and allows manual entry of CDR.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        overrideConfirm->setText(QApplication::translate("uactestClass", "Override CDR?", 0));
        overrideCdrValueLabel->setText(QApplication::translate("uactestClass", "Override Value (in %):", 0));
#ifndef QT_NO_TOOLTIP
        overrideCdrValue->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Cooldown Reduction value.</p><p>(Example: 12.0 = 12%, which is equivalent to a Rank 5 CD Module.)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class uactestClass: public Ui_uactestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UACTEST_H
