QT       += core gui
QT += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    classinfoform.cpp \
    createpaperform.cpp \
    examinfoform.cpp \
    login.cpp \
    main.cpp \
    mysql.cpp \
    questionform.cpp \
    scoreselectform.cpp \
    setexamform.cpp \
    stuinfoform.cpp \
    subjectinfoform.cpp \
    tchinfoform.cpp \
    teacherhome.cpp \
    widget.cpp

HEADERS += \
    classinfoform.h \
    createpaperform.h \
    examinfoform.h \
    login.h \
    mysql.h \
    questionform.h \
    scoreselectform.h \
    setexamform.h \
    stuinfoform.h \
    subjectinfoform.h \
    tchinfoform.h \
    teacherhome.h \
    widget.h

FORMS += \
    classinfoform.ui \
    createpaperform.ui \
    examinfoform.ui \
    login.ui \
    questionform.ui \
    scoreselectform.ui \
    setexamform.ui \
    stuinfoform.ui \
    subjectinfoform.ui \
    tchinfoform.ui \
    teacherhome.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
