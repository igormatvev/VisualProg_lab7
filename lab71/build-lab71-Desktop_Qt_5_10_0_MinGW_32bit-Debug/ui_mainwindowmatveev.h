/********************************************************************************
** Form generated from reading UI file 'mainwindowmatveev.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMATVEEV_H
#define UI_MAINWINDOWMATVEEV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowMatveev
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindowMatveev)
    {
        if (MainWindowMatveev->objectName().isEmpty())
            MainWindowMatveev->setObjectName(QStringLiteral("MainWindowMatveev"));
        MainWindowMatveev->resize(800, 500);
        centralWidget = new QWidget(MainWindowMatveev);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 500));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setRenderHints(QPainter::Antialiasing);
        MainWindowMatveev->setCentralWidget(centralWidget);

        retranslateUi(MainWindowMatveev);

        QMetaObject::connectSlotsByName(MainWindowMatveev);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMatveev)
    {
        MainWindowMatveev->setWindowTitle(QApplication::translate("MainWindowMatveev", "MainWindowMatveev", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMatveev: public Ui_MainWindowMatveev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMATVEEV_H
