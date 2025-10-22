#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QString name[]={"Abdo","Essam","Abozaid"};
    QString code[]={"Abdo12","Essam34","Abozaid56"};

    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    bool found =false;
    for (int i = 0; i < name->length(); i++) {
        if(uName == name[i] && uCode == code[i])
        {
            QMessageBox::information(this,"Welcome Message","User: "+name[i]+"\n","Welcome to managment System");
            found = true;
            break;
        }
    }
    if (!found)
    {
        QMessageBox::information(this,"Error Box","Invalid User name or password");
    }
}

