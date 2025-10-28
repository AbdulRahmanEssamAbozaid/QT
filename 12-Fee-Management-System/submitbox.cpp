#include "submitbox.h"
#include "ui_submitbox.h"

submitBox::submitBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::submitBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&submitBox::subFee);
}

submitBox::~submitBox()
{
    delete ui;
}

void submitBox::subFee()
{
    QString rn = ui->lineEdit->text();
    QString fee = ui->lineEdit_2->text();
    emit getFee(rn,fee);
}

