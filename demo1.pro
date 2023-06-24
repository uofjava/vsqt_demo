QT += core gui widgets

CONFIG += c++11

win32-msvc*:QMAKE_CXXFLAGS += /utf-8
# QMAKE_LFLAGS += "/MANIFESTUAC:\"level='requireAdministrator' uiAccess='false'\""

#SOURCES += \
#    $$files($$PWD/src/*.cpp)

#HEADERS += \
#    $$files($$PWD/src/*.h)


#FORMS += $$PWD/src/demo1.ui



SOURCES += \
    src/form_demo.cpp \
    src/main.cpp \
    src/demo_buttn.cpp
HEADERS += \
    src/demo_buttn.h \
    src/form_demo.h

FORMS += \
    src/demo_buttn.ui \
    src/form_demo.ui




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
