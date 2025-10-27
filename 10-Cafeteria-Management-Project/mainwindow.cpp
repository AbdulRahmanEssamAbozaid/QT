#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(btnFun()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnFun()
{
    QString item=ui->comboBox->currentText();
    QString quantity=ui->lineEdit->text();

    int quantity_int=quantity.toInt();
    if(item == "Burger")
    {
        int bill = 100 * quantity_int;
        QString bill_str = QString::number(bill);
        QMessageBox::information(this,"Bill","Total Bill for: "+quantity+" " +item+" is "
                                +bill_str+" Only!");
    }
    else if(item == "Shawerma")
    {
        int bill = 80 * quantity_int;
        QString bill_str = QString::number(bill);
        QMessageBox::information(this,"Bill","Total Bill for: "+quantity+" " +item+" is "
                                +bill_str+" Only!");
    }
    else if(item == "Cold Drink")
    {
        int bill = 30 * quantity_int;
        QString bill_str = QString::number(bill);
        QMessageBox::information(this,"Bill","Total Bill for: "+quantity+" " +item+" is "
                                                   +bill_str+" Only!");
    }
    else if(item == "Ice Cream")
    {
        int bill = 50 * quantity_int;
        QString bill_str = QString::number(bill);
        QMessageBox::information(this,"Bill","Total Bill for: "+quantity+" " +item+" is "
                                                   +bill_str+" Only!");
    }
    else if(item == "Chips")
    {
        int bill = 20 * quantity_int;
        QString bill_str = QString::number(bill);
        QMessageBox::information(this,"Bill","Total Bill for: "+quantity+" " +item+" is "
                                                   +bill_str+" Only!");
    }
}

