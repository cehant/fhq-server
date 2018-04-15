
INCLUDEPATH += $$PWD/include
INCLUDEPATH += $$PWD

HEADERS += \
    $$PWD/cmd_handlers.h \
    $$PWD/cmd_handler_base.h \
    $$PWD/cmd_handlers_games.h \
    $$PWD/cmd_handlers_server.h \
    $$PWD/cmd_handlers_users.h \
    $$PWD/include/cmd_handlers_quests.h \
    $$PWD/include/cmd_handlers_mails.h \

SOURCES += \
    $$PWD/cmd_handlers.cpp \
    $$PWD/cmd_handler_base.cpp \
    $$PWD/cmd_handlers_games.cpp \
    $$PWD/cmd_handlers_server.cpp \
    $$PWD/cmd_handlers_users.cpp \
    $$PWD/sources/cmd_handlers_quests.cpp \
    $$PWD/sources/cmd_handlers_mails.cpp \
