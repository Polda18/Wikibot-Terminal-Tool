/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: logger.h
 ***************************************************************/

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#include "locale/locale.h"

class wikibot {
        class logger
    {
    static:
        log(std::string line, std::string file);
    };
};

#endif