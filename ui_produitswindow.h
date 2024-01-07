/********************************************************************************
** Form generated from reading UI file 'produitswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUITSWINDOW_H
#define UI_PRODUITSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProduitsWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *i_nom;
    QLabel *label_2;
    QLineEdit *i_prix;
    QLabel *label_3;
    QComboBox *i_cat;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ProduitsWindow)
    {
        if (ProduitsWindow->objectName().isEmpty())
            ProduitsWindow->setObjectName(QString::fromUtf8("ProduitsWindow"));
        ProduitsWindow->resize(400, 300);
        ProduitsWindow->setMaximumSize(QSize(400, 300));
        ProduitsWindow->setInputMethodHints(Qt::ImhLowercaseOnly);
        verticalLayout = new QVBoxLayout(ProduitsWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ProduitsWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        i_nom = new QLineEdit(ProduitsWindow);
        i_nom->setObjectName(QString::fromUtf8("i_nom"));

        gridLayout->addWidget(i_nom, 0, 1, 1, 1);

        label_2 = new QLabel(ProduitsWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        i_prix = new QLineEdit(ProduitsWindow);
        i_prix->setObjectName(QString::fromUtf8("i_prix"));
        i_prix->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(i_prix, 1, 1, 1, 1);

        label_3 = new QLabel(ProduitsWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        i_cat = new QComboBox(ProduitsWindow);
        i_cat->setObjectName(QString::fromUtf8("i_cat"));
        i_cat->setInputMethodHints(Qt::ImhLowercaseOnly|Qt::ImhPreferLowercase);
        i_cat->setEditable(true);

        gridLayout->addWidget(i_cat, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(ProduitsWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ProduitsWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(ProduitsWindow);

        QMetaObject::connectSlotsByName(ProduitsWindow);
    } // setupUi

    void retranslateUi(QDialog *ProduitsWindow)
    {
        ProduitsWindow->setWindowTitle(QCoreApplication::translate("ProduitsWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ProduitsWindow", "Nom du produit", nullptr));
        label_2->setText(QCoreApplication::translate("ProduitsWindow", "Prix", nullptr));
        label_3->setText(QCoreApplication::translate("ProduitsWindow", "Categorie", nullptr));
        pushButton->setText(QCoreApplication::translate("ProduitsWindow", "Ajouter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProduitsWindow", "list des Produits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProduitsWindow: public Ui_ProduitsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUITSWINDOW_H
