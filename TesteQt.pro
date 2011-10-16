#-------------------------------------------------
#
# Project created by QtCreator 2011-10-13T19:46:10
#
#-------------------------------------------------

QT       += core gui

TARGET = TesteQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogabout.cpp

HEADERS  += mainwindow.h \
    dialogabout.h

FORMS    += mainwindow.ui \
    dialogabout.ui

OTHER_FILES += \
    CMakeLists.txt

RESOURCES += \
    resources.qrc






win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../hello_qt_model-build-desktop-Desktop_Qt_4_7_4_for_GCC__Qt_SDK__Debug/release/ -lhello_qt_model
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../hello_qt_model-build-desktop-Desktop_Qt_4_7_4_for_GCC__Qt_SDK__Debug/debug/ -lhello_qt_model
else:symbian: LIBS += -lhello_qt_model
else:unix: LIBS += -L$$PWD/../hello_qt_model-build-desktop-Desktop_Qt_4_7_4_for_GCC__Qt_SDK__Debug/ -lhello_qt_model

INCLUDEPATH += $$PWD/../hello_qt_model
DEPENDPATH += $$PWD/../hello_qt_model
