#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QString name = "AbdulRahman";
    QString pw = "abc123";
    int balance = 5000;
    QString uName = ui->lineEdit->text();
    QString uPW = ui->lineEdit_2->text();
    QString uAmount = ui->lineEdit_3->text();
    int uAmount_int = uAmount.toInt();

    if(uName == name && uPW == pw)
    {
        if(balance >= uAmount_int)
        {
            balance -=uAmount_int;
            QString balance_str = QString::number(balance);
            QMessageBox::information(this,"Success Message","User: "+name+"\n"
                                    "Amount: "+uAmount+"\n"
                                     "Remaining Balance: "+balance_str);
        }
        else
        {
            QMessageBox::information(this,"Error Message","Low Balance!");
        }
    }
    else
    {
        QMessageBox::information(this,"Error Message","Invalid User Name or Password!");
    }
}


