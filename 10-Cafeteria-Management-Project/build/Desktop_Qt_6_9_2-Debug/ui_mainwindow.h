/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 50, 311, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 30px;\n"
"background: light gray;\n"
"color: white;\n"
"font-style: italic;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 150, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 18px;\n"
"color: white;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 210, 131, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 18px;\n"
"color: white;\n"
"}"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(250, 160, 181, 31));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font-size: 18px;\n"
"color: 	white;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 220, 191, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 18px;\n"
"color: white;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 310, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"color: white;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 310, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cafeteria Management", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select Item:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Quantity:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Burger", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Shawerma", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Cold Drink", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Ice Cream", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Chips", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
