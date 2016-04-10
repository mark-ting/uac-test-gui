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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionLegal;
    QAction *action_About;
    QAction *action_Legal;
    QAction *actionE_xit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *uactestLayout;
    QGroupBox *loadoutBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *loadoutLayout;
    QVBoxLayout *uacSelectLayout;
    QLabel *uacSelectLabel;
    QComboBox *uacSelect;
    QVBoxLayout *cycleCountLayout;
    QLabel *cycleCountLabel;
    QSpinBox *cycleCount;
    QVBoxLayout *overrideLayout;
    QGroupBox *overrideCdrBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *overrideCdrLayout;
    QCheckBox *overrideCdrCheck;
    QDoubleSpinBox *overrideCdrValue;
    QGroupBox *overrideJamBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *overrideJamLayout;
    QCheckBox *overrideJamCheck;
    QDoubleSpinBox *overrideJamValue;
    QGroupBox *quirkBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *generalCooldownLayout;
    QCheckBox *generalCooldownCheck;
    QDoubleSpinBox *generalCooldownValue;
    QVBoxLayout *uacCooldownLayout;
    QCheckBox *uacCooldownCheck;
    QDoubleSpinBox *uacCooldownValue;
    QVBoxLayout *uacJamChanceLayout;
    QCheckBox *uacJamChanceCheck;
    QDoubleSpinBox *uacJamChanceValue;
    QGroupBox *modifierBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *fastfireCheck;
    QHBoxLayout *moduleLayout;
    QCheckBox *moduleCheck;
    QSpinBox *moduleRank;
    QHBoxLayout *displayLayout;
    QGroupBox *resultBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *resultLayout;
    QLabel *damageDisplayLabel;
    QLabel *damageDisplay;
    QLabel *timeDisplayLabel;
    QLabel *timeDisplay;
    QLabel *dpsDisplayLabel;
    QLabel *dpsDisplay;
    QGroupBox *theoryBox;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *theoryLayout;
    QLabel *tDamageDisplayLabel;
    QLabel *tTimeDisplayLabel;
    QLabel *tTimeDisplay;
    QLabel *tDpsDisplayLabel;
    QLabel *tDpsDisplay;
    QLabel *tDamageDisplay;
    QProgressBar *progressBar;
    QPushButton *calcButton;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menu_Program;

    void setupUi(QMainWindow *uactestClass)
    {
        if (uactestClass->objectName().isEmpty())
            uactestClass->setObjectName(QStringLiteral("uactestClass"));
        uactestClass->resize(1167, 679);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uactestClass->sizePolicy().hasHeightForWidth());
        uactestClass->setSizePolicy(sizePolicy);
        actionQuit = new QAction(uactestClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(uactestClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionLegal = new QAction(uactestClass);
        actionLegal->setObjectName(QStringLiteral("actionLegal"));
        action_About = new QAction(uactestClass);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_Legal = new QAction(uactestClass);
        action_Legal->setObjectName(QStringLiteral("action_Legal"));
        actionE_xit = new QAction(uactestClass);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        centralWidget = new QWidget(uactestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        uactestLayout = new QGridLayout();
        uactestLayout->setSpacing(6);
        uactestLayout->setObjectName(QStringLiteral("uactestLayout"));
        loadoutBox = new QGroupBox(centralWidget);
        loadoutBox->setObjectName(QStringLiteral("loadoutBox"));
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


        uactestLayout->addWidget(loadoutBox, 0, 0, 1, 2);

        overrideLayout = new QVBoxLayout();
        overrideLayout->setSpacing(6);
        overrideLayout->setObjectName(QStringLiteral("overrideLayout"));
        overrideCdrBox = new QGroupBox(centralWidget);
        overrideCdrBox->setObjectName(QStringLiteral("overrideCdrBox"));
        verticalLayout_5 = new QVBoxLayout(overrideCdrBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        overrideCdrLayout = new QVBoxLayout();
        overrideCdrLayout->setSpacing(6);
        overrideCdrLayout->setObjectName(QStringLiteral("overrideCdrLayout"));
        overrideCdrCheck = new QCheckBox(overrideCdrBox);
        overrideCdrCheck->setObjectName(QStringLiteral("overrideCdrCheck"));

        overrideCdrLayout->addWidget(overrideCdrCheck);

        overrideCdrValue = new QDoubleSpinBox(overrideCdrBox);
        overrideCdrValue->setObjectName(QStringLiteral("overrideCdrValue"));
        overrideCdrValue->setEnabled(false);
        overrideCdrValue->setDecimals(2);
        overrideCdrValue->setMaximum(100);
        overrideCdrValue->setSingleStep(0.1);

        overrideCdrLayout->addWidget(overrideCdrValue);


        verticalLayout_5->addLayout(overrideCdrLayout);


        overrideLayout->addWidget(overrideCdrBox);

        overrideJamBox = new QGroupBox(centralWidget);
        overrideJamBox->setObjectName(QStringLiteral("overrideJamBox"));
        verticalLayout_7 = new QVBoxLayout(overrideJamBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        overrideJamLayout = new QVBoxLayout();
        overrideJamLayout->setSpacing(6);
        overrideJamLayout->setObjectName(QStringLiteral("overrideJamLayout"));
        overrideJamCheck = new QCheckBox(overrideJamBox);
        overrideJamCheck->setObjectName(QStringLiteral("overrideJamCheck"));

        overrideJamLayout->addWidget(overrideJamCheck);

        overrideJamValue = new QDoubleSpinBox(overrideJamBox);
        overrideJamValue->setObjectName(QStringLiteral("overrideJamValue"));
        overrideJamValue->setEnabled(false);
        overrideJamValue->setDecimals(2);
        overrideJamValue->setMaximum(100);
        overrideJamValue->setSingleStep(0.1);

        overrideJamLayout->addWidget(overrideJamValue);


        verticalLayout_7->addLayout(overrideJamLayout);


        overrideLayout->addWidget(overrideJamBox);


        uactestLayout->addLayout(overrideLayout, 0, 4, 2, 1);

        quirkBox = new QGroupBox(centralWidget);
        quirkBox->setObjectName(QStringLiteral("quirkBox"));
        verticalLayout_6 = new QVBoxLayout(quirkBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        generalCooldownLayout = new QVBoxLayout();
        generalCooldownLayout->setSpacing(6);
        generalCooldownLayout->setObjectName(QStringLiteral("generalCooldownLayout"));
        generalCooldownCheck = new QCheckBox(quirkBox);
        generalCooldownCheck->setObjectName(QStringLiteral("generalCooldownCheck"));

        generalCooldownLayout->addWidget(generalCooldownCheck);

        generalCooldownValue = new QDoubleSpinBox(quirkBox);
        generalCooldownValue->setObjectName(QStringLiteral("generalCooldownValue"));
        generalCooldownValue->setEnabled(true);

        generalCooldownLayout->addWidget(generalCooldownValue);


        verticalLayout_6->addLayout(generalCooldownLayout);

        uacCooldownLayout = new QVBoxLayout();
        uacCooldownLayout->setSpacing(6);
        uacCooldownLayout->setObjectName(QStringLiteral("uacCooldownLayout"));
        uacCooldownCheck = new QCheckBox(quirkBox);
        uacCooldownCheck->setObjectName(QStringLiteral("uacCooldownCheck"));

        uacCooldownLayout->addWidget(uacCooldownCheck);

        uacCooldownValue = new QDoubleSpinBox(quirkBox);
        uacCooldownValue->setObjectName(QStringLiteral("uacCooldownValue"));
        uacCooldownValue->setEnabled(true);

        uacCooldownLayout->addWidget(uacCooldownValue);


        verticalLayout_6->addLayout(uacCooldownLayout);

        uacJamChanceLayout = new QVBoxLayout();
        uacJamChanceLayout->setSpacing(6);
        uacJamChanceLayout->setObjectName(QStringLiteral("uacJamChanceLayout"));
        uacJamChanceCheck = new QCheckBox(quirkBox);
        uacJamChanceCheck->setObjectName(QStringLiteral("uacJamChanceCheck"));

        uacJamChanceLayout->addWidget(uacJamChanceCheck);

        uacJamChanceValue = new QDoubleSpinBox(quirkBox);
        uacJamChanceValue->setObjectName(QStringLiteral("uacJamChanceValue"));
        uacJamChanceValue->setEnabled(true);

        uacJamChanceLayout->addWidget(uacJamChanceValue);


        verticalLayout_6->addLayout(uacJamChanceLayout);


        uactestLayout->addWidget(quirkBox, 0, 3, 2, 1);

        modifierBox = new QGroupBox(centralWidget);
        modifierBox->setObjectName(QStringLiteral("modifierBox"));
        modifierBox->setFlat(false);
        verticalLayout = new QVBoxLayout(modifierBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fastfireCheck = new QCheckBox(modifierBox);
        fastfireCheck->setObjectName(QStringLiteral("fastfireCheck"));

        verticalLayout->addWidget(fastfireCheck);

        moduleLayout = new QHBoxLayout();
        moduleLayout->setSpacing(6);
        moduleLayout->setObjectName(QStringLiteral("moduleLayout"));
        moduleCheck = new QCheckBox(modifierBox);
        moduleCheck->setObjectName(QStringLiteral("moduleCheck"));

        moduleLayout->addWidget(moduleCheck);

        moduleRank = new QSpinBox(modifierBox);
        moduleRank->setObjectName(QStringLiteral("moduleRank"));
        moduleRank->setEnabled(true);
        moduleRank->setLayoutDirection(Qt::LeftToRight);
        moduleRank->setAlignment(Qt::AlignCenter);
        moduleRank->setMinimum(1);
        moduleRank->setMaximum(5);

        moduleLayout->addWidget(moduleRank);


        verticalLayout->addLayout(moduleLayout);


        uactestLayout->addWidget(modifierBox, 0, 2, 1, 1);

        displayLayout = new QHBoxLayout();
        displayLayout->setSpacing(6);
        displayLayout->setObjectName(QStringLiteral("displayLayout"));
        resultBox = new QGroupBox(centralWidget);
        resultBox->setObjectName(QStringLiteral("resultBox"));
        verticalLayout_3 = new QVBoxLayout(resultBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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


        verticalLayout_3->addLayout(resultLayout);


        displayLayout->addWidget(resultBox);

        theoryBox = new QGroupBox(centralWidget);
        theoryBox->setObjectName(QStringLiteral("theoryBox"));
        verticalLayout_4 = new QVBoxLayout(theoryBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
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


        verticalLayout_4->addLayout(theoryLayout);


        displayLayout->addWidget(theoryBox);


        uactestLayout->addLayout(displayLayout, 2, 1, 1, 4);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(1);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        uactestLayout->addWidget(progressBar, 3, 0, 1, 5);

        calcButton = new QPushButton(centralWidget);
        calcButton->setObjectName(QStringLiteral("calcButton"));
        calcButton->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calcButton->sizePolicy().hasHeightForWidth());
        calcButton->setSizePolicy(sizePolicy1);

        uactestLayout->addWidget(calcButton, 2, 0, 1, 1);


        gridLayout_2->addLayout(uactestLayout, 0, 0, 1, 1);

        uactestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(uactestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        uactestClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(uactestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        uactestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(uactestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1167, 38));
        menu_Program = new QMenu(menuBar);
        menu_Program->setObjectName(QStringLiteral("menu_Program"));
        uactestClass->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        uacSelectLabel->setBuddy(uacSelect);
        cycleCountLabel->setBuddy(cycleCount);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(uacSelect, cycleCount);
        QWidget::setTabOrder(cycleCount, fastfireCheck);
        QWidget::setTabOrder(fastfireCheck, moduleCheck);
        QWidget::setTabOrder(moduleCheck, moduleRank);
        QWidget::setTabOrder(moduleRank, overrideCdrCheck);
        QWidget::setTabOrder(overrideCdrCheck, overrideCdrValue);

        menuBar->addAction(menu_Program->menuAction());
        menu_Program->addAction(actionE_xit);

        retranslateUi(uactestClass);
        QObject::connect(calcButton, SIGNAL(clicked()), uactestClass, SLOT(onCalcButtonClicked()));
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(updateUiState()));
        QObject::connect(uacSelect, SIGNAL(currentIndexChanged(int)), uactestClass, SLOT(checkParametersValid()));
        QObject::connect(cycleCount, SIGNAL(valueChanged(int)), uactestClass, SLOT(checkParametersValid()));
        QObject::connect(overrideCdrCheck, SIGNAL(toggled(bool)), uactestClass, SLOT(updateUiState()));
        QObject::connect(overrideJamCheck, SIGNAL(toggled(bool)), uactestClass, SLOT(updateUiState()));

        QMetaObject::connectSlotsByName(uactestClass);
    } // setupUi

    void retranslateUi(QMainWindow *uactestClass)
    {
        uactestClass->setWindowTitle(QApplication::translate("uactestClass", "UAC Test", 0));
        actionQuit->setText(QApplication::translate("uactestClass", "Quit", 0));
        actionAbout->setText(QApplication::translate("uactestClass", "About", 0));
        actionLegal->setText(QApplication::translate("uactestClass", "Legal", 0));
        action_About->setText(QApplication::translate("uactestClass", "&About", 0));
        action_Legal->setText(QApplication::translate("uactestClass", "&Legal", 0));
        actionE_xit->setText(QApplication::translate("uactestClass", "E&xit", 0));
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
        overrideCdrBox->setTitle(QApplication::translate("uactestClass", "CDR Override", 0));
#ifndef QT_NO_TOOLTIP
        overrideCdrCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Disables all Cooldown Modifiers and allows manual entry of CDR.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        overrideCdrCheck->setText(QApplication::translate("uactestClass", "Override CDR (%)", 0));
#ifndef QT_NO_TOOLTIP
        overrideCdrValue->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Cooldown Reduction value.</p><p>(Example: 12.0 = 12%, which is equivalent to a Rank 5 CD Module.)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        overrideJamBox->setTitle(QApplication::translate("uactestClass", "Jam Chance Override", 0));
#ifndef QT_NO_TOOLTIP
        overrideJamCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Disables all Cooldown Modifiers and allows manual entry of CDR.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        overrideJamCheck->setText(QApplication::translate("uactestClass", "Override Jam (%)", 0));
#ifndef QT_NO_TOOLTIP
        overrideJamValue->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Cooldown Reduction value.</p><p>(Example: 12.0 = 12%, which is equivalent to a Rank 5 CD Module.)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        quirkBox->setTitle(QApplication::translate("uactestClass", "Quirks", 0));
        generalCooldownCheck->setText(QApplication::translate("uactestClass", "Ballistic Cooldown (%)", 0));
        uacCooldownCheck->setText(QApplication::translate("uactestClass", "UAC Cooldown (%)", 0));
        uacJamChanceCheck->setText(QApplication::translate("uactestClass", "UAC Jam Chance (%)", 0));
        modifierBox->setTitle(QApplication::translate("uactestClass", "Cooldown Modifiers", 0));
#ifndef QT_NO_TOOLTIP
        fastfireCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Enables Fast Fire.</p><p>+5% Cooldown Reduction.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fastfireCheck->setText(QApplication::translate("uactestClass", "Fast Fire", 0));
#ifndef QT_NO_TOOLTIP
        moduleCheck->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Enables Cooldown Module.</p><p>(Not available for UAC2.)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        moduleCheck->setText(QApplication::translate("uactestClass", "CD Module Rank:", 0));
#ifndef QT_NO_TOOLTIP
        moduleRank->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Cooldown Module Rank.</p><p>Each rank increases the cooldown modifier by 2.4%:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 1: +2.4%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 2: +4.8%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 3: +7.2%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 4: +9.6%</li></ul><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rank 5: +12.0%</li></ul></body></html>", 0));
#endif // QT_NO_TOOLTIP
        resultBox->setTitle(QApplication::translate("uactestClass", "Results", 0));
        damageDisplayLabel->setText(QApplication::translate("uactestClass", "Dmg:", 0));
#ifndef QT_NO_TOOLTIP
        damageDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total damage dealt over all cycles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        damageDisplay->setText(QApplication::translate("uactestClass", "damage", 0));
        timeDisplayLabel->setText(QApplication::translate("uactestClass", "Time:", 0));
#ifndef QT_NO_TOOLTIP
        timeDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total time (in seconds) to complete all cycles, assuming perfect timing (no delay between cooldown and firing).</p><p><br/>Devnote: due to the way things are coded, it will actually be greater by (Cooldown) seconds, which matters... not much in the long run (10<span style=\" vertical-align:super;\">4</span>+ cycles).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        timeDisplay->setText(QApplication::translate("uactestClass", "time", 0));
        dpsDisplayLabel->setText(QApplication::translate("uactestClass", "DPS:", 0));
#ifndef QT_NO_TOOLTIP
        dpsDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Average DPS over all cycles.</p><p>More simply: Total Damage / Total Time</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        dpsDisplay->setText(QApplication::translate("uactestClass", "dps", 0));
        theoryBox->setTitle(QApplication::translate("uactestClass", "Theoretical", 0));
        tDamageDisplayLabel->setText(QApplication::translate("uactestClass", "EV(Dmg):", 0));
        tTimeDisplayLabel->setText(QApplication::translate("uactestClass", "EV(Time):", 0));
#ifndef QT_NO_TOOLTIP
        tTimeDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total time (in seconds) to complete all cycles, assuming perfect timing (no delay between cooldown and firing).</p><p><br/>Devnote: due to the way things are coded, it will actually be greater by (Cooldown) seconds, which matters... not much in the long run (10<span style=\" vertical-align:super;\">4</span>+ cycles).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tTimeDisplay->setText(QApplication::translate("uactestClass", "time", 0));
        tDpsDisplayLabel->setText(QApplication::translate("uactestClass", "EV(DPS):", 0));
#ifndef QT_NO_TOOLTIP
        tDpsDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Average DPS over all cycles.</p><p>More simply: Total Damage / Total Time</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tDpsDisplay->setText(QApplication::translate("uactestClass", "dps", 0));
#ifndef QT_NO_TOOLTIP
        tDamageDisplay->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>Total damage dealt over all cycles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tDamageDisplay->setText(QApplication::translate("uactestClass", "damage", 0));
        progressBar->setFormat(QApplication::translate("uactestClass", "%p%", 0));
#ifndef QT_NO_TOOLTIP
        calcButton->setToolTip(QApplication::translate("uactestClass", "<html><head/><body><p>FOR SCIENCE!</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        calcButton->setText(QApplication::translate("uactestClass", "For Science!", 0));
        menu_Program->setTitle(QApplication::translate("uactestClass", "&Program", 0));
    } // retranslateUi

};

namespace Ui {
    class uactestClass: public Ui_uactestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UACTEST_H
