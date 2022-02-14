#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

    static bool isonly(QString str);
    static QString number;
    static int id;

private slots:

    void on_exitButton_2_clicked();
    void on_exitButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
