TEMPLATE = app
TARGET = Interface
QT += core \
    gui
HEADERS += ajoutjournal.h \
    ajoutouvrage.h \
    bibliographiegui.h \
    supprimerref.h
SOURCES += ajoutjournal.cpp \
    ajoutouvrage.cpp \
    bibliographiegui.cpp \
    main.cpp \
    supprimerref.cpp
FORMS += ajoutjournal.ui \
    ajoutouvrage.ui \
    bibliographiegui.ui \
    supprimerref.ui
RESOURCES +=

LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."