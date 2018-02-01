/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: logger.h
 * Description: Wikibot logger namespace for logging into file
 ***************************************************************/

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#include "locale/locale.h"

namespace wikibot {
    namespace logger
    {
        const std::string runtime = "runtime.log";
        const std::string errors = "errors.log";
        
        void log(std::string line, std::string file);
    };
};

#endif
