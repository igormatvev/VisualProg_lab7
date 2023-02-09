#include "mainwindowmatveev.h"
#include "ui_mainwindowmatveev.h"

MainWindowMatveev::MainWindowMatveev(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowMatveev)
{
    ui->setupUi(this);
    GraphicsMatveev* scene = new GraphicsMatveev;
    ui->graphicsView->setScene(scene);
}

MainWindowMatveev::~MainWindowMatveev()
{
    delete ui;
}
