#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(addBtn()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(searchBtn()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QStringList id;
QStringList name;
QStringList group;
QStringList disease;

void MainWindow::addBtn()
{
    QString pID = ui->lineEdit->text();
    QString pName = ui->lineEdit_2->text();
    QString pGroup = ui->comboBox->currentText();
    QString pDesease = ui->lineEdit_3->text();

    if(!pID.isEmpty())
    {
        id.append(pID);
        ui->lineEdit->clear();
    }
    else
    {
        QMessageBox::information(this,"Error","Enter Patient ID!");
    }
    if(!pName.isEmpty())
    {
        name.append(pName);
        ui->lineEdit_2->clear();
    }
    else
    {
        QMessageBox::information(this,"Error","Enter Patient Name!");
    }
    if(!pGroup.isEmpty())
    {
        group.append(pGroup);
    }
    else
    {
        QMessageBox::information(this,"Error","Enter Patient Blood Group!");
    }
    if(!pDesease.isEmpty())
    {
        disease.append(pDesease);
        ui->lineEdit_3->clear();
    }
    else
    {
        QMessageBox::information(this,"Error","Enter Patient Disease!");
    }
}


void MainWindow::searchBtn()
{
    QString pId = ui->lineEdit->text();
    for (int i = 0; i < id.length(); ++i)
    {
        if(pId == id[i])
        {
            QMessageBox::information(this,"Success","Patient ID: "+id[i]+"\n"
                                    "Patient Name: "+name[i]+"\n"
                                    "Patient Blood Group: "+group[i]+"\n"
                                    "Patient Disease: "+disease[i]);
        }
    }
}

