/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *l_username;
    QLineEdit *l_password;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b_login;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *b_cancel;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(261, 153);
        Login->setMinimumSize(QSize(0, 0));
        Login->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_username = new QLineEdit(Login);
        l_username->setObjectName(QString::fromUtf8("l_username"));

        gridLayout->addWidget(l_username, 0, 1, 1, 1);

        l_password = new QLineEdit(Login);
        l_password->setObjectName(QString::fromUtf8("l_password"));
        l_password->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(l_password, 1, 1, 1, 1);

        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        b_login = new QPushButton(Login);
        b_login->setObjectName(QString::fromUtf8("b_login"));

        horizontalLayout_3->addWidget(b_login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        b_cancel = new QPushButton(Login);
        b_cancel->setObjectName(QString::fromUtf8("b_cancel"));

        horizontalLayout_3->addWidget(b_cancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Connection", nullptr));
        label->setText(QCoreApplication::translate("Login", "utilisateur", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "mot de passe", nullptr));
        b_login->setText(QCoreApplication::translate("Login", "Se connecter", nullptr));
        b_cancel->setText(QCoreApplication::translate("Login", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
