#include "login.h"
#include "ui_login.h"
#include "select.h"
#include <QPalette>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <mainwindow.h>
#include <QLineEdit>

QString login::number;  //账号
int login::id;  //用户id

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("登录"));     //设置标题
    this->setWindowIcon(QIcon(":/images/images/icon1.jpg"));   //设置图标

    ui->lineEdit->setPlaceholderText("Administrator account");  //背景提示文字
    ui->lineEdit_2->setPlaceholderText("Password");
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);   //设置lineEdit_2(密码)的模式为密码输入模式，即将输入的文本用小黑点覆盖

    //由于login是顶层窗口，使用样式表设置不了背景图，故采用调色板QPalette来设置
    QPalette pal = this->palette();    //获得login窗口的调色板
    pal.setBrush(QPalette::Background, QBrush(QPixmap(":/images/images/icon3.jpg")));   //设置调色板背景
    setPalette(pal);    //将调色板设置到login中

    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);   //无法最大化
    setFixedSize(this->width(), this->height());    //无法伸缩窗口


}

login::~login()
{
    delete ui;
}

void login::on_exitButton_clicked()
{
    login::number=ui->lineEdit->text();     //获取账号
    QString password=ui->lineEdit_2->text();    //获取密码
    QSqlQuery query;    //定义一个可操作数据库的工具

    if(login::number.length()!=0&&password.length()!=0){    //当输入账号项和密码项都不为空时
        if(isonly(number)){     //如果用户不存在
            QMessageBox::information(this, "登录失败", "当前管理员账号不存在");    //登录失败提示框
            return;
        }

        //这条语句从users表中检索password列和id列，但不返回所有行，只返回number值为login::number的行
        QString instruction=QString("select password,id from users where number='%1'").arg(login::number); //写下将要执行的SQL语句，.arg:将number用于填充字符串中的%1

        query.exec(instruction);    //执行sql语句instruction
        while(query.next())
        {
            //管理员界面
            if(login::number=="0000"&&password=="123456"){ //可以自己更改管理员的账号和密码
                login::id=query.value(1).toInt();   //获取当前账号的ID号
                this->close();  //关闭登录界面
                Select* s=new Select();
                s->show();  //进入管理员界面
                break;
            }
            else{
                QMessageBox::information(this, "登录失败", "密码错误");    //登录失败提示框
                break;
            }
        }
    }
    else{   //当账号项和密码项存在空项时
        QMessageBox::warning(this,"登录失败","不能为空！");
    }

}

bool login::isonly(QString str)     //查找账号是否已存在
{
    QString sql=QString("select * from users where number='%1'").arg(str),n;
    QSqlQuery query;
    bool result;
    query.exec(sql);
    while(query.next())
    {
        n=query.value(1).toString();
    }
    if(n==NULL)
        result=true;    //未存在返回true
    else
        result=false;
    return result;
}

void login::on_exitButton_2_clicked()
{
    if (!(QMessageBox::information(this,tr("退出"),tr("确定退出吗?"),tr("Yes"),tr("No"))))
    {
        this->close();
    }
}

