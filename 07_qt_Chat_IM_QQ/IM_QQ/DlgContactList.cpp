#include "DlgContactList.h"
#include "ui_DlgContactList.h"
#include <QDebug>

DlgContactList::DlgContactList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DlgContactList)
{
    ui->setupUi(this);

    setWindowTitle(QStringLiteral("QQ轻聊版 2019"));
    setWindowIcon(QPixmap("D:/github/Qt-Tcp/07_qt_Chat_IM_QQ/IM_QQ/images/19.ico"));



    QList<QString> nameList;
    nameList<<"wangll"<<"guoyh"<<"guoyx"<<"guow"<<"guoy"<<"guodd"
            <<"guosm"<<"jitm"<<"wanghh"<<"hanjc"<<"hanfg"<<"jitk"
           <<"jiz"<<"jiw"<<"xiaoxx"<<"selina"<<"cathelin"<<"laozi";


    QVector<QToolButton*> vToolBtn;


    for (int i = 0; i < 18; i++)
    {
        //添加头像
        QToolButton* pBtn = new QToolButton;
        pBtn->setText(nameList[i]);
        QString str = QString("D:/github/Qt-Tcp/07_qt_Chat_IM_QQ/IM_QQ/images/%1.jpg").arg(i+1);
        pBtn->setIcon(QPixmap(str));
        pBtn->setIconSize(QPixmap(str).size());
        pBtn->setAutoRaise(true);
        pBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBtn->setFixedWidth(248);  // (QPixmap(str).height(), ui->vLayout->widget());
        ui->vLayout->addWidget(pBtn);

        vToolBtn.push_back(pBtn);//好友按钮保存到容器，便于其他地方操作
        m_vIsShow.push_back(false);
    }



    //为每一个按钮都创建一个系统聊天对话框
    for (int i = 0; i < vToolBtn.size(); i++)
    {
        connect(vToolBtn[i], &QToolButton::clicked, [=]() {
            if(m_vIsShow[i])
                return;

            m_vIsShow[i] = true;
            DlgGroupChat* pDlgGroupChat = new DlgGroupChat(nullptr, vToolBtn[i]->text());
            pDlgGroupChat->setWindowTitle(vToolBtn[i]->text());
            pDlgGroupChat->setWindowIcon(vToolBtn[i]->icon());
            pDlgGroupChat->show();

            connect(pDlgGroupChat, &DlgGroupChat::closeDlgGroupChat, [=](){
                m_vIsShow[i] = false;
            });
        });
    }


}

DlgContactList::~DlgContactList()
{
    delete ui;
}





