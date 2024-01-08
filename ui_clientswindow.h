/********************************************************************************
** Form generated from reading UI file 'clientswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSWINDOW_H
#define UI_CLIENTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientsWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *i_nom;
    QLineEdit *i_prenom;
    QLabel *label_3;
    QLineEdit *i_tel;
    QLabel *label_2;
    QPushButton *b_ajouter;
    QPushButton *pushButton;

    void setupUi(QDialog *ClientsWindow)
    {
        if (ClientsWindow->objectName().isEmpty())
            ClientsWindow->setObjectName(QString::fromUtf8("ClientsWindow"));
        ClientsWindow->resize(400, 300);
        ClientsWindow->setMaximumSize(QSize(400, 300));
        verticalLayout_2 = new QVBoxLayout(ClientsWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ClientsWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        i_nom = new QLineEdit(ClientsWindow);
        i_nom->setObjectName(QString::fromUtf8("i_nom"));

        gridLayout->addWidget(i_nom, 0, 1, 1, 1);

        i_prenom = new QLineEdit(ClientsWindow);
        i_prenom->setObjectName(QString::fromUtf8("i_prenom"));

        gridLayout->addWidget(i_prenom, 1, 1, 1, 1);

        label_3 = new QLabel(ClientsWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        i_tel = new QLineEdit(ClientsWindow);
        i_tel->setObjectName(QString::fromUtf8("i_tel"));

        gridLayout->addWidget(i_tel, 2, 1, 1, 1);

        label_2 = new QLabel(ClientsWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        b_ajouter = new QPushButton(ClientsWindow);
        b_ajouter->setObjectName(QString::fromUtf8("b_ajouter"));
        b_ajouter->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(b_ajouter);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(ClientsWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(ClientsWindow);

        QMetaObject::connectSlotsByName(ClientsWindow);
    } // setupUi

    void retranslateUi(QDialog *ClientsWindow)
    {
        ClientsWindow->setWindowTitle(QCoreApplication::translate("ClientsWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClientsWindow", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("ClientsWindow", "Telephone", nullptr));
        label_2->setText(QCoreApplication::translate("ClientsWindow", "prenom", nullptr));
        b_ajouter->setText(QCoreApplication::translate("ClientsWindow", "Ajouter", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientsWindow", "List des Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientsWindow: public Ui_ClientsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSWINDOW_H
