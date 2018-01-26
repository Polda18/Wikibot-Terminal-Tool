#################################################################
# Wikibot Terminal Tool - by Polda18
# LICENCE: GNU-GPL-v3.1
# 
# File: Makefile
# Description: Project cross-platform compilation
#################################################################

GCC = g++
BASE_FLAGS = -std=gnu++14 -O2
CC = {GCC} {BASE_FLAGS}
APP = wikibot
en-US:
    ifeq ($(OS),Windows_NT)
        mkdir bin/win32/locale.en-US
        windres src/resources.rc -O conff -o src/resources.res
        {CC} src/resources.res src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.en-US.cpp -finput-charset=utf-8 -fexec-charset=cp437 -o bin/win32/locale.en-US/{APP}.exe
    else
        mkdir -p bin/linux-i386/locale.en-US
        {CC} src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.en-US.cpp -o bin/linux-i386/locale.en-US/{APP}
        cp src/wikibot.png bin/linux-i386/wikibot.png
    endif
en-UK:
    ifeq ($(OS),Windows_NT)
        mkdir bin/win32/locale.en-UK
        windres src/resources.rc -O conff -o src/resources.res
        {CC} src/resources.res src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.en-UK.cpp -finput-charset=utf-8 -fexec-charset=cp850 -o bin/win32/locale.en-UK/{APP}.exe
    else
        mkdir -p bin/linux-i386/locale.en-UK
        {CC} src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.en-UK.cpp -o bin/linux-i386/locale.en-UK/{APP}
        cp src/wikibot.png bin/linux-i386/wikibot.png
    endif
cs-CZ:
    ifeq ($(OS),Windows_NT)
        mkdir bin/win32/locale.cs-CZ
        windres src/resources.rc -O conff -o src/resources.res
        {CC} src/resources.res src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.cs-CZ.cpp -finput-charset=utf-8 -fexec-charset=cp852 -o bin/win32/locale.cs-CZ/{APP}.exe
    else
        mkdir -p bin/linux-i386/locale.cs-CZ
        {CC} src/main.cpp src/logger.cpp src/functions.cpp src/Config.cpp src/locale/locale.cs-CZ.cpp -o bin/linux-i386/locale.en-US/{APP}
        cp src/wikibot.png bin/linux-i386/wikibot.png
    endif
# Place additional locales here [default is en-US]. Run as: make locale (e.g. make cs-CZ)

# Additional changes coming soon
# Continue below and above (leave last line empty - satisfying Unix requirements)
