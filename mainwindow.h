#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pcommserverlib.h"

using namespace  PCOMMSERVERLIB;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public:
    PCOMMSERVERLIB::PmacDevice* Pmac;
    void init_pmac();
};

#endif // MAINWINDOW_H
