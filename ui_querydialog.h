/********************************************************************************
** Form generated from reading UI file 'querydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDIALOG_H
#define UI_QUERYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_QueryDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QDialog *QueryDialog)
    {
        if (QueryDialog->objectName().isEmpty())
            QueryDialog->setObjectName(QString::fromUtf8("QueryDialog"));
        QueryDialog->resize(400, 300);
        horizontalLayout = new QHBoxLayout(QueryDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(QueryDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(QueryDialog);

        QMetaObject::connectSlotsByName(QueryDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryDialog)
    {
        QueryDialog->setWindowTitle(QCoreApplication::translate("QueryDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryDialog: public Ui_QueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDIALOG_H
