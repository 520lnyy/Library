QT       += core gui
QT       += sql #加载数据库

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    select.cpp \
    splashscreen.cpp

HEADERS += \
    login.h \
    mainwindow.h \
    select.h \
    splashscreen.h

FORMS += \
    login.ui \
    mainwindow.ui \
    select.ui \
    splashscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

RC_ICONS = lnyy.ico #为应用程序设置专属图标,你值得拥有(lnyy.ico位于项目源程序目录下)
