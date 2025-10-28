#ifndef RECBOX_H
#define RECBOX_H

#include <QDialog>

namespace Ui {
class recBox;
}

class recBox : public QDialog
{
    Q_OBJECT
signals:
    void getRec(const QString &r);
public:
    explicit recBox(QWidget *parent = nullptr);
    ~recBox();

private slots:
    void rec();

private:
    Ui::recBox *ui;
};

#endif // RECBOX_H
