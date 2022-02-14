/********************************************************************************
** Form generated from reading UI file 'splashscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHSCREEN_H
#define UI_SPLASHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplashScreen
{
public:
    QLabel *label;

    void setupUi(QWidget *SplashScreen)
    {
        if (SplashScreen->objectName().isEmpty())
            SplashScreen->setObjectName(QString::fromUtf8("SplashScreen"));
        SplashScreen->resize(800, 620);
        label = new QLabel(SplashScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 540, 101, 16));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);

        retranslateUi(SplashScreen);

        QMetaObject::connectSlotsByName(SplashScreen);
    } // setupUi

    void retranslateUi(QWidget *SplashScreen)
    {
        SplashScreen->setWindowTitle(QApplication::translate("SplashScreen", "Form", nullptr));
        label->setText(QApplication::translate("SplashScreen", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplashScreen: public Ui_SplashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHSCREEN_H
