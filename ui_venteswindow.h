/********************************************************************************
** Form generated from reading UI file 'venteswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTESWINDOW_H
#define UI_VENTESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VentesWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *i_client;
    QComboBox *i_produit;
    QLineEdit *i_paye;
    QLineEdit *i_quantite;
    QPushButton *b_vente;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *VentesWindow)
    {
        if (VentesWindow->objectName().isEmpty())
            VentesWindow->setObjectName(QString::fromUtf8("VentesWindow"));
        VentesWindow->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(VentesWindow);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(VentesWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(VentesWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(VentesWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(VentesWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        i_client = new QComboBox(VentesWindow);
        i_client->setObjectName(QString::fromUtf8("i_client"));

        gridLayout->addWidget(i_client, 0, 1, 1, 1);

        i_produit = new QComboBox(VentesWindow);
        i_produit->setObjectName(QString::fromUtf8("i_produit"));

        gridLayout->addWidget(i_produit, 1, 1, 1, 1);

        i_paye = new QLineEdit(VentesWindow);
        i_paye->setObjectName(QString::fromUtf8("i_paye"));
        i_paye->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);

        gridLayout->addWidget(i_paye, 3, 1, 1, 1);

        i_quantite = new QLineEdit(VentesWindow);
        i_quantite->setObjectName(QString::fromUtf8("i_quantite"));

        gridLayout->addWidget(i_quantite, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        b_vente = new QPushButton(VentesWindow);
        b_vente->setObjectName(QString::fromUtf8("b_vente"));
        b_vente->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(b_vente);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(VentesWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(VentesWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_5);

        pushButton = new QPushButton(VentesWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(VentesWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VentesWindow);

        QMetaObject::connectSlotsByName(VentesWindow);
    } // setupUi

    void retranslateUi(QDialog *VentesWindow)
    {
        VentesWindow->setWindowTitle(QCoreApplication::translate("VentesWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentesWindow", "Client", nullptr));
        label_2->setText(QCoreApplication::translate("VentesWindow", "Produit", nullptr));
        label_3->setText(QCoreApplication::translate("VentesWindow", "Quantit\303\251", nullptr));
        label_4->setText(QCoreApplication::translate("VentesWindow", "\303\240 pay\303\251", nullptr));
        i_paye->setText(QString());
        b_vente->setText(QCoreApplication::translate("VentesWindow", "Ajouter vente", nullptr));
        label_5->setText(QCoreApplication::translate("VentesWindow", "Autres actions", nullptr));
        pushButton->setText(QCoreApplication::translate("VentesWindow", "Modifier Credits", nullptr));
        pushButton_2->setText(QCoreApplication::translate("VentesWindow", "Afficher Crediteurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentesWindow: public Ui_VentesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTESWINDOW_H
