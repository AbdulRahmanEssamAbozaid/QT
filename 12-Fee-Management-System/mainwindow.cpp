#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,submitbox(new submitBox (this))
    ,recbox(new recBox (this))
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::submitFun);
    connect(submitbox,&submitBox::getFee,this,&MainWindow::ongetFee);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&MainWindow::recFun);
    connect(recbox,&recBox::getRec,this,&MainWindow::ongetRec);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete submitbox;
    delete recbox;
}

QStringList rollNoList={"101","102","103"};
QStringList feeList={"50000","60000","70000"};
QStringList paidList={"0","0","0"};
QStringList pendingList={"50000","60000","70000"};
bool found = false;
bool recFound = false;
void MainWindow::submitFun()
{
    submitbox->show();

}

void MainWindow::ongetFee(const QString &rn,const QString &f)
{
    for (int i = 0; i < rollNoList.length(); ++i)
    {
        if(rn==rollNoList[i])
        {
            found = true;
            int f_int = f.toInt();
            int paid_int = paidList[i].toInt();
            int totalPaid = paid_int + f_int;
            paidList[i] = QString::number(totalPaid);

            int pend_int = pendingList[i].toInt();
            int totalPend = pend_int - f_int;
            pendingList[i] = QString::number(totalPend);

            QMessageBox::information(this,"Success","Fee Submitted: "+f+"\n"
                                    "Total Paid Fee: "+paidList[i]+"\n"
                                    "Pending Dues: "+pendingList[i]+" out of "+feeList[i]);
            break;
        }
    }
    if(!found)
    {
        QMessageBox::information(this,"Error","Invalid RollNo!");
    }
}

void MainWindow::recFun()
{
    recbox->show();
}

void MainWindow::ongetRec(const QString &r)
{
    for (int i = 0; i < rollNoList.length(); ++i)
    {
        if(r == rollNoList[i])
        {
            recFound = true;
            QMessageBox::information(this,"Success","Total Fee: "+feeList[i]+"\n"
                                    "Total Paid Fee: "+paidList[i]+"\n"
                                    "Pending Fee: "+pendingList[i]);
            break;
        }
    }
    if(!recFound)
    {
        QMessageBox::information(this,"Error","Roll_No Not found! ");
    }
}
