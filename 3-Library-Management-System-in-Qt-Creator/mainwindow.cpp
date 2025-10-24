#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button1()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button1()
{
    QString book[] = {"Chemistry","English","Math","Physics"};
    int  rollNo[] = {101,203,304,405};

    QString uBook = ui->lineEdit_2->text();
    QString uRollNo = ui->lineEdit->text();
    int uRollNo_Int = uRollNo.toInt();
    bool found = false;
    for (int i = 0; i < sizeof(rollNo); i++)
    {
        if(uRollNo_Int == rollNo[i])
        {
            for (int j = 0; j < sizeof(book); j++)
            {
                if(uBook == book[j])
                {
                    QMessageBox::information(this,"Library Management","Book: "+book[j]+"\n"
                                            "To Student: "+uRollNo+"\n");
                    found = true;
                    break;
                }
            }
        }
    }
    if(!found)
    {
        QMessageBox::information(this,"Error Box", "Invalid Book Name or Roll Number is Incorrect");
    }

}

