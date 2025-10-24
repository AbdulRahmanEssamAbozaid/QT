#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(calculation()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculation()
{
    QString sal = ui->lineEdit->text();
    int sal_int = sal.toInt();
    if(sal_int > 5000 && sal_int <= 1000)
    {
        int tax = sal_int * 0.05;
        int psal = sal_int - tax;
        QString tax_str = QString::number(tax);
        QString psal_str = QString::number(psal);

        QMessageBox::information(this,"Tax Calculation","Total Salary is: "+sal+"\n"
                                 "Tax Applied on salary is: "+tax_str+"\n"
                                 "Payable Salary after  Tax: "+psal_str);
    }
    else if(sal_int > 10000 && sal_int <= 20000)
    {
        int tax = sal_int * 0.10;
        int psal = sal_int - tax;
        QString tax_str = QString::number(tax);
        QString psal_str = QString::number(psal);

        QMessageBox::information(this,"Tax Calculation","Total Salary is: "+sal+"\n"
                                "Tax Applied on salary is: "+tax_str+"\n"
                                "Payable Salary after  Tax: "+psal_str);
    }
    else if(sal_int > 20000)
    {
        int tax = sal_int * 0.15;
        int psal = sal_int - tax;
        QString tax_str = QString::number(tax);
        QString psal_str = QString::number(psal);

        QMessageBox::information(this,"Tax Calculation","Total Salary is: "+sal+"\n"
                                        "Tax Applied on salary is: "+tax_str+"\n"
                                        "Payable Salary after  Tax: "+psal_str);
    }
    else
    {
        QMessageBox::information(this,"Tax Calculation","Tax is not applied on this Salary: ");
    }
}

