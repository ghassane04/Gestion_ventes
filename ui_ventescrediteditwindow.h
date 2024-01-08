/********************************************************************************
** Form generated from reading UI file 'ventescrediteditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTESCREDITEDITWINDOW_H
#define UI_VENTESCREDITEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VentesCreditEditWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *i_client;
    QLabel *label_2;
    QComboBox *i_produit;
    QLabel *label_3;
    QLineEdit *i_quantite;
    QLabel *label_4;
    QLineEdit *i_paye;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *VentesCreditEditWindow)
    {
        if (VentesCreditEditWindow->objectName().isEmpty())
            VentesCreditEditWindow->setObjectName(QString::fromUtf8("VentesCreditEditWindow"));
        VentesCreditEditWindow->resize(282, 154);
        VentesCreditEditWindow->setMinimumSize(QSize(282, 154));
        VentesCreditEditWindow->setMaximumSize(QSize(282, 154));
        VentesCreditEditWindow->setModal(true);
        verticalLayout = new QVBoxLayout(VentesCreditEditWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(VentesCreditEditWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        i_client = new QComboBox(VentesCreditEditWindow);
        i_client->setObjectName(QString::fromUtf8("i_client"));

        gridLayout->addWidget(i_client, 0, 1, 1, 1);

        label_2 = new QLabel(VentesCreditEditWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        i_produit = new QComboBox(VentesCreditEditWindow);
        i_produit->setObjectName(QString::fromUtf8("i_produit"));

        gridLayout->addWidget(i_produit, 1, 1, 1, 1);

        label_3 = new QLabel(VentesCreditEditWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        i_quantite = new QLineEdit(VentesCreditEditWindow);
        i_quantite->setObjectName(QString::fromUtf8("i_quantite"));

        gridLayout->addWidget(i_quantite, 2, 1, 1, 1);

        label_4 = new QLabel(VentesCreditEditWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        i_paye = new QLineEdit(VentesCreditEditWindow);
        i_paye->setObjectName(QString::fromUtf8("i_paye"));

        gridLayout->addWidget(i_paye, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(VentesCreditEditWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(VentesCreditEditWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentesCreditEditWindow);

        QMetaObject::connectSlotsByName(VentesCreditEditWindow);
    } // setupUi

    void retranslateUi(QDialog *VentesCreditEditWindow)
    {
        VentesCreditEditWindow->setWindowTitle(QCoreApplication::translate("VentesCreditEditWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentesCreditEditWindow", "Client", nullptr));
        label_2->setText(QCoreApplication::translate("VentesCreditEditWindow", "Produit", nullptr));
        label_3->setText(QCoreApplication::translate("VentesCreditEditWindow", "Quantit\303\251", nullptr));
        label_4->setText(QCoreApplication::translate("VentesCreditEditWindow", "\303\240 pay\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("VentesCreditEditWindow", "Modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("VentesCreditEditWindow", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentesCreditEditWindow: public Ui_VentesCreditEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTESCREDITEDITWINDOW_H
