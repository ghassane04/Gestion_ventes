/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *b_clients;
    QPushButton *b_produits;
    QVBoxLayout *verticalLayout_2;
    QPushButton *b_achats;
    QPushButton *b_ventes;
    QPushButton *b_stock;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dbStatus;
    QSpacerItem *horizontalSpacer;
    QLabel *lastModification;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setMaximumSize(QSize(400, 300));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        b_clients = new QPushButton(centralWidget);
        b_clients->setObjectName(QString::fromUtf8("b_clients"));
        b_clients->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(b_clients);

        b_produits = new QPushButton(centralWidget);
        b_produits->setObjectName(QString::fromUtf8("b_produits"));
        b_produits->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(b_produits);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        b_achats = new QPushButton(centralWidget);
        b_achats->setObjectName(QString::fromUtf8("b_achats"));
        b_achats->setMinimumSize(QSize(0, 50));
        b_achats->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(b_achats);

        b_ventes = new QPushButton(centralWidget);
        b_ventes->setObjectName(QString::fromUtf8("b_ventes"));
        b_ventes->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(b_ventes);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_3);

        b_stock = new QPushButton(centralWidget);
        b_stock->setObjectName(QString::fromUtf8("b_stock"));
        b_stock->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(b_stock);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dbStatus = new QLabel(centralWidget);
        dbStatus->setObjectName(QString::fromUtf8("dbStatus"));
        dbStatus->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(dbStatus);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lastModification = new QLabel(centralWidget);
        lastModification->setObjectName(QString::fromUtf8("lastModification"));
        lastModification->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(lastModification);


        verticalLayout_5->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        b_clients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        b_produits->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        b_achats->setText(QCoreApplication::translate("MainWindow", "Achats", nullptr));
        b_ventes->setText(QCoreApplication::translate("MainWindow", "Ventes", nullptr));
        b_stock->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        dbStatus->setText(QCoreApplication::translate("MainWindow", "Non Connect\303\251", nullptr));
        lastModification->setText(QCoreApplication::translate("MainWindow", "derni\303\250re modification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
