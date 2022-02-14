#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QSplashScreen>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class SplashScreen; }
QT_END_NAMESPACE

class SplashScreen : public QSplashScreen
{
    Q_OBJECT

public:
    explicit SplashScreen(QPixmap pixmap, QWidget *parent = 0);
    ~SplashScreen();

    //设置进度区间
    void setRange(int min, int max);

public slots:
    //更新进度
    void updateProgress(int num);
    void showProgressMessage(int total, const QString& msg);

private:
    Ui::SplashScreen *ui;
    QProgressBar *bar;  //进度条
};
#endif // SPLASHSCREEN_H
