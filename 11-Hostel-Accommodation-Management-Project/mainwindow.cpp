#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,room(1)
    ,bed(1)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(Btn1()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Btn1()
{
    QString id = ui->lineEdit->text();
    QString name = ui->lineEdit_2->text();
    bool found = false;
    if(room <= 5)
    {
        found = true;
        if(bed <= 3)
        {
            QString bed_str = QString::number(bed);
            QString room_str = QString::number(room);
            QMessageBox::information(this,"Success","Bed "+bed_str+" is Allocated in Room"
                                    +room_str+" for Student "+name+" with RollNo "+id+" Successfuly");
            bed++;
        }
        else if(bed > 3)
        {
            bed =1;
            room++;
        }
    }
    if(!found)
    {
        QMessageBox::information(this,"Failure","No Bed is Available");
    }
}

