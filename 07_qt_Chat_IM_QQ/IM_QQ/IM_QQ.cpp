#include "IM_QQ.h"
#include "ui_IM_QQ.h"

IM_QQ::IM_QQ(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IM_QQ)
{
    ui->setupUi(this);
    //setWindowTitle(QStringLiteral("IM_QQ"));
    setWindowIcon(QPixmap("D:/github/Qt-Tcp/07_qt_Chat_IM_QQ/IM_QQ/images/19.ico"));
}

IM_QQ::~IM_QQ()
{
    delete ui;
}
