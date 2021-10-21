/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionreset;
    QAction *actionclear;
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
    QPushButton *pushButton_4;
    QCheckBox *checkBox;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Allfish_filter_checkbox;
    QCheckBox *Marlin_filter_checkbox;
    QCheckBox *Shark_filter_checkbox;
    QCheckBox *Tuna_filter_checkbox;
    QFrame *frame_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *widget_3;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QQuickWidget *quickWidget;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QTabWidget *tabWidget;
    QWidget *tab_chart;
    QFrame *ChartFrame;
    QHBoxLayout *Cha;
    QWidget *tab;
    QFrame *ChartFrame2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *tab_2;
    QTableWidget *twTable;
    QPushButton *pushButton;
    QWidget *widget_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QCheckBox *checkBox01;
    QCheckBox *checkBox02;
    QCheckBox *checkBox03;
    QCheckBox *checkBox04;
    QCheckBox *checkBox05;
    QCheckBox *checkBox06;
    QCheckBox *checkBox07;
    QCheckBox *checkBox08;
    QCheckBox *checkBox09;
    QCheckBox *checkBox10;
    QCheckBox *checkBox11;
    QCheckBox *checkBox12;
    QPushButton *pushButton_8;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menutest;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1396, 719);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionreset = new QAction(MainWindow);
        actionreset->setObjectName(QString::fromUtf8("actionreset"));
        actionclear = new QAction(MainWindow);
        actionclear->setObjectName(QString::fromUtf8("actionclear"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1080, 120, 291, 91));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, -10, 161, 101));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 40, 80, 20));
        radioButton = new QRadioButton(widget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(60, 60, 91, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1090, 280, 151, 51));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(1090, 230, 211, 41));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(810, 120, 271, 471));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 251, 71));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 21));
        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 10, 121, 22));
        dateEdit->setToolTipDuration(0);
        dateEdit->setStyleSheet(QString::fromUtf8(""));
        dateEdit->setAccelerated(false);
        dateEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit_2 = new QDateEdit(frame_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(70, 40, 121, 22));
        dateEdit_2->setStyleSheet(QString::fromUtf8(""));
        dateEdit_2->setCalendarPopup(true);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 81, 21));
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 10, 41, 51));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 251, 51));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 20, 221, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Allfish_filter_checkbox = new QCheckBox(layoutWidget);
        Allfish_filter_checkbox->setObjectName(QString::fromUtf8("Allfish_filter_checkbox"));

        horizontalLayout->addWidget(Allfish_filter_checkbox);

        Marlin_filter_checkbox = new QCheckBox(layoutWidget);
        Marlin_filter_checkbox->setObjectName(QString::fromUtf8("Marlin_filter_checkbox"));

        horizontalLayout->addWidget(Marlin_filter_checkbox);

        Shark_filter_checkbox = new QCheckBox(layoutWidget);
        Shark_filter_checkbox->setObjectName(QString::fromUtf8("Shark_filter_checkbox"));

        horizontalLayout->addWidget(Shark_filter_checkbox);

        Tuna_filter_checkbox = new QCheckBox(layoutWidget);
        Tuna_filter_checkbox->setObjectName(QString::fromUtf8("Tuna_filter_checkbox"));

        horizontalLayout->addWidget(Tuna_filter_checkbox);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 150, 241, 41));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 47, 21));
        comboBox = new QComboBox(frame_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(70, 10, 121, 22));
        comboBox->setEditable(true);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(1080, 20, 291, 91));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 50, 80, 20));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 60, 751, 571));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        quickWidget = new QQuickWidget(page);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 751, 491));
        sizePolicy1.setHeightForWidth(quickWidget->sizePolicy().hasHeightForWidth());
        quickWidget->setSizePolicy(sizePolicy1);
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(620, 10, 93, 28));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(620, 10, 93, 28));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 751, 521));
        tab_chart = new QWidget();
        tab_chart->setObjectName(QString::fromUtf8("tab_chart"));
        ChartFrame = new QFrame(tab_chart);
        ChartFrame->setObjectName(QString::fromUtf8("ChartFrame"));
        ChartFrame->setGeometry(QRect(10, 10, 721, 481));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ChartFrame->sizePolicy().hasHeightForWidth());
        ChartFrame->setSizePolicy(sizePolicy2);
        Cha = new QHBoxLayout(ChartFrame);
        Cha->setObjectName(QString::fromUtf8("Cha"));
        tabWidget->addTab(tab_chart, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        ChartFrame2 = new QFrame(tab);
        ChartFrame2->setObjectName(QString::fromUtf8("ChartFrame2"));
        ChartFrame2->setGeometry(QRect(10, 10, 721, 481));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ChartFrame2->sizePolicy().hasHeightForWidth());
        ChartFrame2->setSizePolicy(sizePolicy3);
        horizontalLayout_5 = new QHBoxLayout(ChartFrame2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        twTable = new QTableWidget(tab_2);
        if (twTable->columnCount() < 6)
            twTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (twTable->rowCount() < 1)
            twTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        twTable->setObjectName(QString::fromUtf8("twTable"));
        twTable->setGeometry(QRect(10, 0, 731, 451));
        sizePolicy3.setHeightForWidth(twTable->sizePolicy().hasHeightForWidth());
        twTable->setSizePolicy(sizePolicy3);
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_2);
        tabWidget->raise();
        pushButton_7->raise();
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 10, 111, 31));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(1090, 340, 271, 121));
        groupBox_2 = new QGroupBox(widget_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 191, 101));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(2, 20, 179, 67));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox01 = new QCheckBox(layoutWidget1);
        checkBox01->setObjectName(QString::fromUtf8("checkBox01"));

        gridLayout->addWidget(checkBox01, 0, 0, 1, 1);

        checkBox02 = new QCheckBox(layoutWidget1);
        checkBox02->setObjectName(QString::fromUtf8("checkBox02"));

        gridLayout->addWidget(checkBox02, 0, 1, 1, 1);

        checkBox03 = new QCheckBox(layoutWidget1);
        checkBox03->setObjectName(QString::fromUtf8("checkBox03"));

        gridLayout->addWidget(checkBox03, 0, 2, 1, 1);

        checkBox04 = new QCheckBox(layoutWidget1);
        checkBox04->setObjectName(QString::fromUtf8("checkBox04"));

        gridLayout->addWidget(checkBox04, 0, 3, 1, 1);

        checkBox05 = new QCheckBox(layoutWidget1);
        checkBox05->setObjectName(QString::fromUtf8("checkBox05"));

        gridLayout->addWidget(checkBox05, 1, 0, 1, 1);

        checkBox06 = new QCheckBox(layoutWidget1);
        checkBox06->setObjectName(QString::fromUtf8("checkBox06"));

        gridLayout->addWidget(checkBox06, 1, 1, 1, 1);

        checkBox07 = new QCheckBox(layoutWidget1);
        checkBox07->setObjectName(QString::fromUtf8("checkBox07"));

        gridLayout->addWidget(checkBox07, 1, 2, 1, 1);

        checkBox08 = new QCheckBox(layoutWidget1);
        checkBox08->setObjectName(QString::fromUtf8("checkBox08"));

        gridLayout->addWidget(checkBox08, 1, 3, 1, 1);

        checkBox09 = new QCheckBox(layoutWidget1);
        checkBox09->setObjectName(QString::fromUtf8("checkBox09"));

        gridLayout->addWidget(checkBox09, 2, 0, 1, 1);

        checkBox10 = new QCheckBox(layoutWidget1);
        checkBox10->setObjectName(QString::fromUtf8("checkBox10"));

        gridLayout->addWidget(checkBox10, 2, 1, 1, 1);

        checkBox11 = new QCheckBox(layoutWidget1);
        checkBox11->setObjectName(QString::fromUtf8("checkBox11"));

        gridLayout->addWidget(checkBox11, 2, 2, 1, 1);

        checkBox12 = new QCheckBox(layoutWidget1);
        checkBox12->setObjectName(QString::fromUtf8("checkBox12"));

        gridLayout->addWidget(checkBox12, 2, 3, 1, 1);

        pushButton_8 = new QPushButton(widget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 40, 41, 51));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1396, 21));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menutest->menuAction());
        menutest->addAction(actionreset);
        menutest->addAction(actionclear);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionreset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        actionclear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "tuna", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "for_tuna", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Begin Date", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "End Date", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Sync", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Fish Type", nullptr));
        Allfish_filter_checkbox->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        Marlin_filter_checkbox->setText(QCoreApplication::translate("MainWindow", "Marlin", nullptr));
        Shark_filter_checkbox->setText(QCoreApplication::translate("MainWindow", "Shark", nullptr));
        Tuna_filter_checkbox->setText(QCoreApplication::translate("MainWindow", "Tuna", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ship Type", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "shark", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_chart), QCoreApplication::translate("MainWindow", "Month Chart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Type Chart", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Ship ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Fish Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = twTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Latitude", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = twTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Longtitude", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Table", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset Perspective", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Month", nullptr));
        checkBox01->setText(QCoreApplication::translate("MainWindow", "01", nullptr));
        checkBox02->setText(QCoreApplication::translate("MainWindow", "02", nullptr));
        checkBox03->setText(QCoreApplication::translate("MainWindow", "03", nullptr));
        checkBox04->setText(QCoreApplication::translate("MainWindow", "04", nullptr));
        checkBox05->setText(QCoreApplication::translate("MainWindow", "05", nullptr));
        checkBox06->setText(QCoreApplication::translate("MainWindow", "06", nullptr));
        checkBox07->setText(QCoreApplication::translate("MainWindow", "07", nullptr));
        checkBox08->setText(QCoreApplication::translate("MainWindow", "08", nullptr));
        checkBox09->setText(QCoreApplication::translate("MainWindow", "09", nullptr));
        checkBox10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        checkBox11->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        checkBox12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        menutest->setTitle(QCoreApplication::translate("MainWindow", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
