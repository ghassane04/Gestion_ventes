/********************************************************************************
** Form generated from reading UI file 'stockwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKWINDOW_H
#define UI_STOCKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StockWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *b_showStock;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *StockWindow)
    {
        if (StockWindow->objectName().isEmpty())
            StockWindow->setObjectName(QString::fromUtf8("StockWindow"));
        StockWindow->resize(400, 300);
        horizontalLayout = new QHBoxLayout(StockWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        b_showStock = new QPushButton(StockWindow);
        b_showStock->setObjectName(QString::fromUtf8("b_showStock"));
        b_showStock->setMinimumSize(QSize(0, 50));
        b_showStock->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(b_showStock);

        pushButton = new QPushButton(StockWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(StockWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(StockWindow);

        QMetaObject::connectSlotsByName(StockWindow);
    } // setupUi

    void retranslateUi(QDialog *StockWindow)
    {
        StockWindow->setWindowTitle(QCoreApplication::translate("StockWindow", "Dialog", nullptr));
        b_showStock->setText(QCoreApplication::translate("StockWindow", "Afficher le Stock", nullptr));
        pushButton->setText(QCoreApplication::translate("StockWindow", "Afficher Produits epuis\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StockWindow", "Afficher Produits plus vendu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StockWindow: public Ui_StockWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKWINDOW_H
