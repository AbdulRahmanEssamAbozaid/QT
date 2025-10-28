#ifndef SUBMITBOX_H
#define SUBMITBOX_H

#include <QDialog>

namespace Ui {
class submitBox;
}

class submitBox : public QDialog
{
    Q_OBJECT
signals:
    void getFee(const QString &r,const QString &f);

public:
    explicit submitBox(QWidget *parent = nullptr);
    ~submitBox();

private slots:
    void subFee();

private:
    Ui::submitBox *ui;
};

#endif // SUBMITBOX_H
