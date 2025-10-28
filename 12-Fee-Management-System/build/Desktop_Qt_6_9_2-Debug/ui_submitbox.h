/********************************************************************************
** Form generated from reading UI file 'submitbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITBOX_H
#define UI_SUBMITBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_submitBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *submitBox)
    {
        if (submitBox->objectName().isEmpty())
            submitBox->setObjectName("submitBox");
        submitBox->resize(573, 371);
        label = new QLabel(submitBox);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 231, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 40px;\n"
"}"));
        label_2 = new QLabel(submitBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"}"));
        lineEdit = new QLineEdit(submitBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 110, 221, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
"}"));
        lineEdit_2 = new QLineEdit(submitBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 160, 221, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
"}"));
        label_3 = new QLabel(submitBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 160, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"}"));
        pushButton = new QPushButton(submitBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 260, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 20px;\n"
"}"));

        retranslateUi(submitBox);

        QMetaObject::connectSlotsByName(submitBox);
    } // setupUi

    void retranslateUi(QDialog *submitBox)
    {
        submitBox->setWindowTitle(QCoreApplication::translate("submitBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("submitBox", "Fee Window", nullptr));
        label_2->setText(QCoreApplication::translate("submitBox", "Enetr RollNo:", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("submitBox", "Enetr Fee:", nullptr));
        pushButton->setText(QCoreApplication::translate("submitBox", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class submitBox: public Ui_submitBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMITBOX_H
