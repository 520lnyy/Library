#include "splashscreen.h"
#include "ui_splashscreen.h"
#include <QProgressBar>
#include <QLabel>

SplashScreen::SplashScreen(QPixmap pixmap, QWidget *parent)
    : QSplashScreen(parent, pixmap)
    , ui(new Ui::SplashScreen)
{
    ui->setupUi(this);
    ui->label->setText(tr("正在连接数据库..."));
    ui->label->adjustSize();    //让label自适应文字大小
   // bar = new QProgressBar(this);
    //设置进度条的位置
   // bar->setGeometry(0, pixmap.height()-50, pixmap.width(), 30);
    resize(pixmap.size());
}

SplashScreen::~SplashScreen()
{
    delete ui;
}

void SplashScreen::setRange(int min, int max)   //设置进度区间
{
    bar->setRange(min, max);
}

void SplashScreen::updateProgress(int num)  //设置值
{
    bar->setValue(num);
}

void SplashScreen::showProgressMessage(int total, const QString &msg)
{
    bar->setRange(0, total);
    showMessage(msg);
}



