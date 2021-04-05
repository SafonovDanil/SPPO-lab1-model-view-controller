QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        abstractcompany.cpp \
        companiesregister.cpp \
        companytype_1.cpp \
        companytype_2.cpp \
        companytype_3.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ICompany.h \
    abstractcompany.h \
    companiesregister.h \
    companytype_1.h \
    companytype_2.h \
    companytype_3.h
