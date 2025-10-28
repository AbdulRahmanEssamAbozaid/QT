#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(addFun()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(searchFun()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QStringList medicines;
QStringList prices;
QStringList totalQuant;
bool found = false;

void MainWindow::addFun()
{
    QString medicine =ui->lineEdit->text();
    QString price = ui->lineEdit_2->text();
    QString quant =ui->lineEdit_3->text();

    medicines.append(medicine);
    prices.append(price);
    totalQuant.append(quant);

    QMessageBox::information(this,"Success","Medicine Added Successfuly!");
}


void MainWindow::searchFun()
{
    QString user_m=ui->lineEdit->text();
    QString user_q=ui->lineEdit_3->text();

    for (int i = 0; i < medicines.length(); ++i)
    {
        if(user_m == medicines[i])
        {
            found = true;
            int quant_int = user_q.toInt();
            int prices_int = prices[i].toInt();
            int totalQuant_int = totalQuant[i].toInt();

            int bill = quant_int * prices_int;
            QString bill_str = QString::number(bill);

            totalQuant_int=totalQuant_int-quant_int;
            totalQuant[i]=QString::number(totalQuant_int);

            QMessageBox::information(this,"Customer Bill","Total Bill "+bill_str+" for "+medicines[i]+"\n"
                                    "Remain Quantity: "+totalQuant[i]);
            break;
        }
    }
    if(!found)
    {
        QMessageBox::information(this,"Error","Invalide Medicine! ");
    }
}

