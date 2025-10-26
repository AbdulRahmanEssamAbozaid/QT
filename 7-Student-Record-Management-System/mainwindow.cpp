#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString sub = ui->lineEdit_2->text();
    QString rn = ui->lineEdit_3->text();
    QString g = ui->lineEdit_4->text();

    QMessageBox::information(this,"Student Record","Name of Student: "+name+"\n"
                             "Subject of Student: "+sub+"\n"
                             "Roll of Student: "+rn+"\n"
                             "Grade of Student: "+g);
}

