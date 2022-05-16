/********************************************************************************
** Form generated from reading UI file 'DlgGroupChat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGGROUPCHAT_H
#define UI_DLGGROUPCHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgGroupChat
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widChat;
    QVBoxLayout *verticalLayout;
    QTextBrowser *tbChat;
    QFrame *widToolSet;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fcbFont;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *tbFontBold;
    QToolButton *tbFontTilt;
    QToolButton *tbFontUnderline;
    QToolButton *tbMark;
    QToolButton *tbChatSave;
    QToolButton *tbChatClean;
    QTextEdit *teChatInput;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbExit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbSend;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *labCount;
    QTableWidget *twUser;

    void setupUi(QWidget *DlgGroupChat)
    {
        if (DlgGroupChat->objectName().isEmpty())
            DlgGroupChat->setObjectName(QString::fromUtf8("DlgGroupChat"));
        DlgGroupChat->resize(993, 711);
        DlgGroupChat->setMinimumSize(QSize(18, 18));
        gridLayout = new QGridLayout(DlgGroupChat);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_5 = new QWidget(DlgGroupChat);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(30000, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widChat = new QWidget(widget_3);
        widChat->setObjectName(QString::fromUtf8("widChat"));
        verticalLayout = new QVBoxLayout(widChat);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tbChat = new QTextBrowser(widChat);
        tbChat->setObjectName(QString::fromUtf8("tbChat"));

        verticalLayout->addWidget(tbChat);

        widToolSet = new QFrame(widChat);
        widToolSet->setObjectName(QString::fromUtf8("widToolSet"));
        widToolSet->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(widToolSet);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fcbFont = new QFontComboBox(widToolSet);
        fcbFont->setObjectName(QString::fromUtf8("fcbFont"));
        fcbFont->setMinimumSize(QSize(80, 0));
        fcbFont->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(fcbFont);

        comboBox = new QComboBox(widToolSet);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        tbFontBold = new QToolButton(widToolSet);
        tbFontBold->setObjectName(QString::fromUtf8("tbFontBold"));
        tbFontBold->setMinimumSize(QSize(18, 18));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/\345\212\240\347\262\227.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFontBold->setIcon(icon);
        tbFontBold->setCheckable(true);

        horizontalLayout->addWidget(tbFontBold);

        tbFontTilt = new QToolButton(widToolSet);
        tbFontTilt->setObjectName(QString::fromUtf8("tbFontTilt"));
        tbFontTilt->setMinimumSize(QSize(18, 18));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/\345\200\276\346\226\234.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFontTilt->setIcon(icon1);
        tbFontTilt->setCheckable(true);

        horizontalLayout->addWidget(tbFontTilt);

        tbFontUnderline = new QToolButton(widToolSet);
        tbFontUnderline->setObjectName(QString::fromUtf8("tbFontUnderline"));
        tbFontUnderline->setMinimumSize(QSize(18, 18));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/\344\270\213\345\210\222\347\272\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFontUnderline->setIcon(icon2);
        tbFontUnderline->setCheckable(true);

        horizontalLayout->addWidget(tbFontUnderline);

        tbMark = new QToolButton(widToolSet);
        tbMark->setObjectName(QString::fromUtf8("tbMark"));
        tbMark->setMinimumSize(QSize(18, 18));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/\350\260\203\350\211\262\347\233\230 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMark->setIcon(icon3);
        tbMark->setCheckable(true);

        horizontalLayout->addWidget(tbMark);

        tbChatSave = new QToolButton(widToolSet);
        tbChatSave->setObjectName(QString::fromUtf8("tbChatSave"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbChatSave->sizePolicy().hasHeightForWidth());
        tbChatSave->setSizePolicy(sizePolicy1);
        tbChatSave->setMinimumSize(QSize(18, 18));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/\344\270\213\350\275\275.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbChatSave->setIcon(icon4);
        tbChatSave->setCheckable(true);

        horizontalLayout->addWidget(tbChatSave);

        tbChatClean = new QToolButton(widToolSet);
        tbChatClean->setObjectName(QString::fromUtf8("tbChatClean"));
        tbChatClean->setMinimumSize(QSize(18, 18));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/\346\211\253\345\270\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbChatClean->setIcon(icon5);
        tbChatClean->setCheckable(true);

        horizontalLayout->addWidget(tbChatClean);


        verticalLayout->addWidget(widToolSet);

        teChatInput = new QTextEdit(widChat);
        teChatInput->setObjectName(QString::fromUtf8("teChatInput"));
        teChatInput->setMinimumSize(QSize(0, 80));
        teChatInput->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(teChatInput);


        verticalLayout_3->addWidget(widChat);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(507, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbExit = new QPushButton(widget_2);
        pbExit->setObjectName(QString::fromUtf8("pbExit"));

        horizontalLayout_2->addWidget(pbExit);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbSend = new QPushButton(widget_2);
        pbSend->setObjectName(QString::fromUtf8("pbSend"));

        horizontalLayout_2->addWidget(pbSend);


        verticalLayout_3->addWidget(widget_2);


        horizontalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(150, 0));
        widget_4->setMaximumSize(QSize(250, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labCount = new QLabel(widget_4);
        labCount->setObjectName(QString::fromUtf8("labCount"));
        labCount->setMinimumSize(QSize(0, 25));

        verticalLayout_4->addWidget(labCount);

        twUser = new QTableWidget(widget_4);
        if (twUser->columnCount() < 2)
            twUser->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twUser->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twUser->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twUser->setObjectName(QString::fromUtf8("twUser"));
        twUser->setEnabled(true);

        verticalLayout_4->addWidget(twUser);


        horizontalLayout_3->addWidget(widget_4);


        gridLayout->addWidget(widget_5, 0, 0, 1, 1);


        retranslateUi(DlgGroupChat);

        comboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(DlgGroupChat);
    } // setupUi

    void retranslateUi(QWidget *DlgGroupChat)
    {
        DlgGroupChat->setWindowTitle(QApplication::translate("DlgGroupChat", "Form", nullptr));
        comboBox->setItemText(0, QApplication::translate("DlgGroupChat", "8", nullptr));
        comboBox->setItemText(1, QApplication::translate("DlgGroupChat", "9", nullptr));
        comboBox->setItemText(2, QApplication::translate("DlgGroupChat", "10", nullptr));
        comboBox->setItemText(3, QApplication::translate("DlgGroupChat", "11", nullptr));
        comboBox->setItemText(4, QApplication::translate("DlgGroupChat", "12", nullptr));
        comboBox->setItemText(5, QApplication::translate("DlgGroupChat", "13", nullptr));
        comboBox->setItemText(6, QApplication::translate("DlgGroupChat", "14", nullptr));
        comboBox->setItemText(7, QApplication::translate("DlgGroupChat", "15", nullptr));
        comboBox->setItemText(8, QApplication::translate("DlgGroupChat", "16", nullptr));
        comboBox->setItemText(9, QApplication::translate("DlgGroupChat", "17", nullptr));
        comboBox->setItemText(10, QApplication::translate("DlgGroupChat", "18", nullptr));
        comboBox->setItemText(11, QApplication::translate("DlgGroupChat", "19", nullptr));
        comboBox->setItemText(12, QApplication::translate("DlgGroupChat", "20", nullptr));
        comboBox->setItemText(13, QApplication::translate("DlgGroupChat", "21", nullptr));
        comboBox->setItemText(14, QApplication::translate("DlgGroupChat", "22", nullptr));
        comboBox->setItemText(15, QApplication::translate("DlgGroupChat", "23", nullptr));
        comboBox->setItemText(16, QApplication::translate("DlgGroupChat", "24", nullptr));
        comboBox->setItemText(17, QApplication::translate("DlgGroupChat", "25", nullptr));
        comboBox->setItemText(18, QApplication::translate("DlgGroupChat", "26", nullptr));

        comboBox->setCurrentText(QApplication::translate("DlgGroupChat", "12", nullptr));
        tbFontBold->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        tbFontTilt->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        tbFontUnderline->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        tbMark->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        tbChatSave->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        tbChatClean->setText(QApplication::translate("DlgGroupChat", "...", nullptr));
        pbExit->setText(QApplication::translate("DlgGroupChat", "\351\200\200\345\207\272", nullptr));
        pbSend->setText(QApplication::translate("DlgGroupChat", "\345\217\221\351\200\201", nullptr));
#ifndef QT_NO_SHORTCUT
        pbSend->setShortcut(QApplication::translate("DlgGroupChat", "Ctrl+Return", nullptr));
#endif // QT_NO_SHORTCUT
        labCount->setText(QApplication::translate("DlgGroupChat", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\23218\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twUser->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgGroupChat", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twUser->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgGroupChat", "\346\234\200\345\220\216\344\270\212\347\272\277\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgGroupChat: public Ui_DlgGroupChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGGROUPCHAT_H
