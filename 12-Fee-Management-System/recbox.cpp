#include "recbox.h"
#include "ui_recbox.h"

recBox::recBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&recBox::rec);
}

recBox::~recBox()
{
    delete ui;
}

void recBox::rec()
{
    QString r=ui->lineEdit->text();
    emit getRec(r);
}

