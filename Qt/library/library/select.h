#ifndef SELECT_H
#define SELECT_H

#include <QWidget>

namespace Ui {
class Select;
}

class Select : public QWidget
{
    Q_OBJECT

public:
    explicit Select(QWidget *parent = nullptr);
    ~Select();

private slots:
    void on_But1_clicked();

    void on_But2_clicked();

    void on_But3_clicked();

    void on_But4_clicked();

    void on_But5_clicked();

private:
    Ui::Select *ui;
};

#endif // SELECT_H
