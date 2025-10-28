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
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
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
        label->setGeometry(QRect(150, 0, 541, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 40px;\n"
"background: light gray;\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 120, 101, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: white;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 120, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 200, 141, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: white;\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 200, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
"}"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 270, 251, 41));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font-size: 20px;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 270, 161, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: white;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 450, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 20px;\n"
"color: Red;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 450, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 20px;\n"
"color: Red;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(450, 450, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 20px;\n"
"color: Red;\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 350, 141, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: white;\n"
"}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 350, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
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
        label->setText(QCoreApplication::translate("MainWindow", "Hospital Management System", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Patient ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Patient Name:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Select Group", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "O+", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "O-", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "A+", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "A-", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "B+", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "B-", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Patient B_Group:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Desease:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
