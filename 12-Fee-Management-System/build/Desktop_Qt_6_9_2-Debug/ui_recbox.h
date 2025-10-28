/********************************************************************************
** Form generated from reading UI file 'recbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECBOX_H
#define UI_RECBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_recBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *recBox)
    {
        if (recBox->objectName().isEmpty())
            recBox->setObjectName("recBox");
        recBox->resize(679, 428);
        label = new QLabel(recBox);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 20, 291, 71));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 40px;\n"
"}"));
        label_2 = new QLabel(recBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 110, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"}"));
        lineEdit = new QLineEdit(recBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 110, 281, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 20px;\n"
"}"));
        pushButton = new QPushButton(recBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 190, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 20px;\n"
"}"));

        retranslateUi(recBox);

        QMetaObject::connectSlotsByName(recBox);
    } // setupUi

    void retranslateUi(QDialog *recBox)
    {
        recBox->setWindowTitle(QCoreApplication::translate("recBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("recBox", "Record Window", nullptr));
        label_2->setText(QCoreApplication::translate("recBox", "Enter RollNo:", nullptr));
        pushButton->setText(QCoreApplication::translate("recBox", "Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recBox: public Ui_recBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECBOX_H
