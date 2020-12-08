QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    MenuBar/menubar.cpp \
    shortcut.cpp \
    SyntaxHighlighter/syntaxhighlighter.cpp \
    textedit.cpp

HEADERS += \
    SyntaxHighlighter/IHighlighter.hpp \
    mainwindow.hpp \
    MenuBar/menubar.hpp \
    shortcut.hpp \
    SyntaxHighlighter/syntaxhighlighter.hpp \
    textedit.hpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
  SyntaxHighlighter/resource.qrc
