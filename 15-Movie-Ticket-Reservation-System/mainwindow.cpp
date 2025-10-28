#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,count(10)
    ,row(1)
    ,col(1)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::ticketFun);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ticketFun()
{
    QString name = ui->lineEdit->text();
    QString id = ui->lineEdit_2->text();

    QString row_str = QString::number(row);
    QString col_str = QString::number(col);
    QString count_str = QString::number(count);

    if(count >0)
    {
        if(col < 10)
        {
            col++;
            QMessageBox::information(this,"Success","You have reserved Seat No "+col_str+
                                    "in Row "+row_str+" for "+name+" with ID"+id+"\n"
                                    "Remaining Seats "+count_str);
        }
        else
        {
            row++;
            col=0;
        }
        count--;
    }
    else
    {
        QMessageBox::information(this,"Error","All Seats Reserved");
    }
}

