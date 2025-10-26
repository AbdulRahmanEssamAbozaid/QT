#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(buttonFun()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));

    tries=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::buttonFun()
{
    QString  Names[]={"AbdulRahman","Essam","Abozaid","Ali"};
    QString  Codes[]={"AbdulRahman12","Essam34","Abozaid56","Ali78"};

    QString  uName=ui->lineEdit->text();
    QString  uCode=ui->lineEdit_2->text();

    bool found = false;
    for (int i = 0; i < sizeof(Names)/sizeof(Names[0]); ++i)
    {
        if(uName == Names[i] && uCode == Codes[i])
        {

            found = true;
            break;
        }
    }
    if(found)
    {
        QMessageBox::information(this,"Success Message","Name of User: "+uName+"\n"
                                "Welcome to Management System!");

    }
    else
    {
        if(tries <= 5)
        {
            QMessageBox::information(this,"Try Again!","Invalide User Name or Password" "\n" "Try again");
            tries++;
        }
        else
        {
            QMessageBox::information(this,"You are Blocked","Too many attempts!" "\n" "Do not try again");
        }
    }

}
