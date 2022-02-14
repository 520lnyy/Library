/********************************************************************************
** Form generated from reading UI file 'select.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_H
#define UI_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Select
{
public:
    QPushButton *But1;
    QPushButton *But2;
    QPushButton *But3;
    QPushButton *But4;
    QPushButton *But5;

    void setupUi(QWidget *Select)
    {
        if (Select->objectName().isEmpty())
            Select->setObjectName(QString::fromUtf8("Select"));
        Select->resize(1280, 853);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font.setPointSize(9);
        Select->setFont(font);
        Select->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:Microsoft Yahei;\n"
"}\n"
"\n"
"QPushButton#But1,QPushButton#But2,QPushButton#But3,QPushButton#But4,QPushButton#But5{\n"
"	color:rgb(255, 255, 255);\n"
"	background-color:rgb(0, 0, 0, 50%);\n"
"	font:10pt;\n"
"	border:1px solid blue;\n"
"	border-radius:10px;	\n"
"}"));
        But1 = new QPushButton(Select);
        But1->setObjectName(QString::fromUtf8("But1"));
        But1->setGeometry(QRect(540, 70, 180, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Yahei"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        But1->setFont(font1);
        But2 = new QPushButton(Select);
        But2->setObjectName(QString::fromUtf8("But2"));
        But2->setGeometry(QRect(540, 220, 180, 50));
        But2->setFont(font1);
        But3 = new QPushButton(Select);
        But3->setObjectName(QString::fromUtf8("But3"));
        But3->setGeometry(QRect(540, 370, 180, 50));
        But3->setFont(font1);
        But4 = new QPushButton(Select);
        But4->setObjectName(QString::fromUtf8("But4"));
        But4->setGeometry(QRect(540, 520, 180, 50));
        But4->setFont(font1);
        But5 = new QPushButton(Select);
        But5->setObjectName(QString::fromUtf8("But5"));
        But5->setGeometry(QRect(540, 670, 180, 50));
        But5->setFont(font1);

        retranslateUi(Select);

        QMetaObject::connectSlotsByName(Select);
    } // setupUi

    void retranslateUi(QWidget *Select)
    {
        Select->setWindowTitle(QApplication::translate("Select", "Form", nullptr));
        But1->setText(QApplication::translate("Select", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        But2->setText(QApplication::translate("Select", "\350\257\273\350\200\205\347\256\241\347\220\206", nullptr));
        But3->setText(QApplication::translate("Select", "\345\200\237\351\230\205\347\256\241\347\220\206", nullptr));
        But4->setText(QApplication::translate("Select", "\345\205\205\345\200\274\347\256\241\347\220\206", nullptr));
        But5->setText(QApplication::translate("Select", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Select: public Ui_Select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_H
