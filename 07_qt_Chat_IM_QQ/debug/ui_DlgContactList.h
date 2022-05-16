/********************************************************************************
** Form generated from reading UI file 'DlgContactList.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCONTACTLIST_H
#define UI_DLGCONTACTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgContactList
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *vLayout;

    void setupUi(QWidget *DlgContactList)
    {
        if (DlgContactList->objectName().isEmpty())
            DlgContactList->setObjectName(QString::fromUtf8("DlgContactList"));
        DlgContactList->resize(284, 830);
        DlgContactList->setMinimumSize(QSize(281, 528));
        verticalLayout = new QVBoxLayout(DlgContactList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(DlgContactList);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 284, 804));
        vLayout = new QVBoxLayout(page);
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        vLayout->setContentsMargins(0, 0, 0, 0);
        toolBox->addItem(page, QString::fromUtf8("\347\276\244\346\210\220\345\221\230(18)"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(DlgContactList);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgContactList);
    } // setupUi

    void retranslateUi(QWidget *DlgContactList)
    {
        DlgContactList->setWindowTitle(QApplication::translate("DlgContactList", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("DlgContactList", "\347\276\244\346\210\220\345\221\230(18)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgContactList: public Ui_DlgContactList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCONTACTLIST_H
