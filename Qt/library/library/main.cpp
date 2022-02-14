#include "mainwindow.h"
#include "login.h"
#include "splashscreen.h"
#include <QApplication>
#include <QSqlQuery>
#include <QDebug>
#include <iostream>
#include <QSqlError>
#include <QPixmap>
#include <QSplashScreen>
#include <QMessageBox>
#include <windows.h>

void checkwarning1();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*************************程序启动画面**********************/
    SplashScreen splash(QPixmap("Start.png"));
    splash.show();  //显示此启动图片
    a.processEvents();  //使程序在显示启动画面的同时仍能响应鼠标等其他事件
    /*************************加载数据库***********************/
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");  //加载QMYSQL库驱动
    db.setHostName("localhost");    //连接本机数据库，也可以填上某个IP去连接另一台设备的数据库
    db.setPort(3307);   //自定义的端口号
    db.setDatabaseName("librarymanagesystem");  //使用的数据库名称
    db.setUserName("root");     //用户名
    db.setPassword("123456");   //数据库密码

    QString error;
    if(!db.open())  //连接数据库并判断是否加载成功
    {
        error = db.lastError().text();  //取得错误信息
        qDebug()<<"不能连接"<<"connect to mysql error"<<error;  //打印错误信息
        QMessageBox::critical(NULL,"数据库连接失败","原因："+error);
        return 0;
    }
    else
    {
        qDebug()<<"连接成功"<<"connect to mysql OK";
    }
    db.exec("SET NAMES 'GBK'"); //这里主要和中文乱码有关，如果运行出来不存在乱码，这句话也可以不加，灵活调整
    checkwarning1();    //在程序启动时进行用户超期检查，在后面的章节中会提到

    /*****************************主程序****************************/   
    login w;
    Sleep(5000);    //毫秒级延时,用于展示程序启动图片
    w.show();
    splash.finish(&w);  //表示在主窗体对象初始化完成后，结束启动画面
    return a.exec();
}

void checkwarning1(){
    //在程序启动时检查，随着时间的推移，用户是否有超期记录，如果有，则将warning字段设置为yes
    QSqlQuery query;
    QString sql=QString("select user_id from userbooks where is_return='否' and return_date-now()<0");//未归还且超期了

    query.exec("SET NAMES 'UTF8'");     //设置编码格式为UTF8,保证中文字符不乱码
    query.exec(sql);

    if(query.size()!=0){//存在超期的用户
        while(query.next()){
            QString sql1=QString("update users set warning='yes' where id=%0").arg(query.value(0).toInt());//warning改为yes
            query.exec(sql1);
        }
    }

}

