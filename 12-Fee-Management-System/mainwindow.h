#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "submitbox.h"
#include "recbox.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void submitFun();
    void ongetFee(const QString &rn,const QString &f);

    void recFun();
    void ongetRec(const QString &r);

private:
    Ui::MainWindow *ui;
    submitBox *submitbox;
    recBox *recbox;
};
#endif // MAINWINDOW_H
