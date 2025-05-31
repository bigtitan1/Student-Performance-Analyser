QT       += core gui widgets charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    individualstudent.cpp \
    login_main.cpp \
    main.cpp \
    mainwindow.cpp \
    modify.cpp \
    new_student.cpp \
    performance_chart.cpp \
    rank.cpp

HEADERS += \
    individualstudent.h \
    login_main.h \
    mainwindow.h \
    modify.h \
    new_student.h \
    performance_chart.h \
    rank.h

FORMS += \
    individualstudent.ui \
    login_main.ui \
    mainwindow.ui \
    modify.ui \
    new_student.ui \
    performance_chart.ui \
    rank.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
