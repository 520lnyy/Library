/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget;
    QPushButton *exitButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *exitButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1075, 604);
        login->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:Microsoft Yahei;\n"
"}\n"
"\n"
"QLabel#label,QLabel#label_2{\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLineEdit{	\n"
"	border:1px solid blue;\n"
"	border-radius:10px;\n"
"	background-color:rgba(255,255,255,50%);\n"
"}\n"
"\n"
"QWidget#widget{\n"
"	background-color:rgb(0, 0, 0, 40%);\n"
"	border-radius: 40px;\n"
"	\n"
"}\n"
"\n"
"QPushButton#exitButton,QPushButton#exitButton_2{\n"
"	color:rgb(255, 255, 255);\n"
"	border:1px solid blue;\n"
"	border-radius:10px;	\n"
"}\n"
"\n"
""));
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(240, 90, 591, 391));
        widget->setStyleSheet(QString::fromUtf8(""));
        exitButton_2 = new QPushButton(widget);
        exitButton_2->setObjectName(QString::fromUtf8("exitButton_2"));
        exitButton_2->setGeometry(QRect(330, 250, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font.setPointSize(10);
        exitButton_2->setFont(font);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 130, 200, 30));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 130, 105, 27));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 180, 200, 30));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 180, 60, 27));
        label_2->setFont(font1);
        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(170, 250, 81, 31));
        exitButton->setFont(font);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        exitButton_2->setText(QApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("login", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267:", nullptr));
        lineEdit_2->setText(QString());
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        exitButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        Q_UNUSED(login);
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
