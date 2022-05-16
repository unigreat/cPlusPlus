/********************************************************************************
** Form generated from reading UI file 'IM_QQ.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IM_QQ_H
#define UI_IM_QQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IM_QQ
{
public:

    void setupUi(QWidget *IM_QQ)
    {
        if (IM_QQ->objectName().isEmpty())
            IM_QQ->setObjectName(QString::fromUtf8("IM_QQ"));
        IM_QQ->resize(400, 300);

        retranslateUi(IM_QQ);

        QMetaObject::connectSlotsByName(IM_QQ);
    } // setupUi

    void retranslateUi(QWidget *IM_QQ)
    {
        IM_QQ->setWindowTitle(QApplication::translate("IM_QQ", "IM_QQ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IM_QQ: public Ui_IM_QQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IM_QQ_H
