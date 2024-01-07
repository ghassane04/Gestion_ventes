/********************************************************************************
** Form generated from reading UI file 'achatswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHATSWINDOW_H
#define UI_ACHATSWINDOW_H

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

class Ui_AchatsWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *i_produit;
    QLabel *label_2;
    QLineEdit *i_quantite;
    QPushButton *b_ajouter;

    void setupUi(QDialog *AchatsWindow)
    {
        if (AchatsWindow->objectName().isEmpty())
            AchatsWindow->setObjectName(QString::fromUtf8("AchatsWindow"));
        AchatsWindow->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AchatsWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(AchatsWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AchatsWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        i_produit = new QComboBox(AchatsWindow);
        i_produit->setObjectName(QString::fromUtf8("i_produit"));

        gridLayout->addWidget(i_produit, 0, 1, 1, 1);

        label_2 = new QLabel(AchatsWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        i_quantite = new QLineEdit(AchatsWindow);
        i_quantite->setObjectName(QString::fromUtf8("i_quantite"));
        i_quantite->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);

        gridLayout->addWidget(i_quantite, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        b_ajouter = new QPushButton(AchatsWindow);
        b_ajouter->setObjectName(QString::fromUtf8("b_ajouter"));

        verticalLayout_2->addWidget(b_ajouter);


        retranslateUi(AchatsWindow);

        QMetaObject::connectSlotsByName(AchatsWindow);
    } // setupUi

    void retranslateUi(QDialog *AchatsWindow)
    {
        AchatsWindow->setWindowTitle(QCoreApplication::translate("AchatsWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("AchatsWindow", "Ajouter un produit en stock", nullptr));
        label->setText(QCoreApplication::translate("AchatsWindow", "Produit", nullptr));
        label_2->setText(QCoreApplication::translate("AchatsWindow", "Quantit\303\251", nullptr));
        b_ajouter->setText(QCoreApplication::translate("AchatsWindow", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AchatsWindow: public Ui_AchatsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHATSWINDOW_H
