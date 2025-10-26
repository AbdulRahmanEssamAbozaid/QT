#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button1()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::button1()
{
    QString item1 = "Soap";
    int price1 = 100;
    int quantity1 = 10;

    QString uItem = ui->lineEdit->text();
    QString uQuantity = ui->lineEdit_2->text();

    int uQuantity_int =uQuantity.toInt();

    if(uItem == item1 && quantity1 >= uQuantity_int)
    {
        quantity1 = quantity1 - uQuantity_int;
        QString quantity1_str = QString::number(quantity1);
        int bill = price1 *uQuantity_int;
        QString bill_str = QString::number(bill);

        QMessageBox::information(this,"Bill System","Item Name: "+item1+"\n"
                                "Quantity: "+uQuantity+"\n"
                                "Total Bill: "+bill_str+"\n"
                                "Remain Quantity: "+quantity1_str);
    }
    else
    {
        QMessageBox::information(this,"Bill System","Item Not Available");
    }
}

