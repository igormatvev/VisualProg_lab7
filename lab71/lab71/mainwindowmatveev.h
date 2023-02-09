#ifndef MAINWINDOWMATVEEV_H
#define MAINWINDOWMATVEEV_H

#include <QMainWindow>
#include "graphicsmatveev.h"

namespace Ui {
class MainWindowMatveev;
}

class MainWindowMatveev : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowMatveev(QWidget *parent = nullptr);
    ~MainWindowMatveev();

private:
    Ui::MainWindowMatveev *ui;
};

#endif // MAINWINDOWMATVEEV_H
