#include "select.h"
#include "ui_select.h"
#include <QIcon>
#include <QPalette>
#include <QMessageBox>

Select::Select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Select)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("选择功能"));     //设置标题
    this->setWindowIcon(QIcon(":/images/images/icon1.jpg"));   //设置图标
    //由于login是顶层窗口，使用样式表设置不了背景图，故采用调色板QPalette来设置
    QPalette pal = this->palette();    //获得login窗口的调色板
    pal.setBrush(QPalette::Background, QBrush(QPixmap(":/images/images/icon4.jpg")));   //设置调色板背景
    setPalette(pal);    //将调色板设置到login中

    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);   //无法最大化
    setFixedSize(this->width(), this->height());    //无法伸缩窗口
}

Select::~Select()
{
    delete ui;
}

void Select::on_But1_clicked()
{

}


void Select::on_But2_clicked()
{

}


void Select::on_But3_clicked()
{

}


void Select::on_But4_clicked()
{

}


void Select::on_But5_clicked()
{
    if (!(QMessageBox::information(this,tr("退出"),tr("确定退出吗?"),tr("Yes"),tr("No"))))
    {
        this->close();
    }
}

