/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.h
 * Description: Functions definition file
 ***************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

#include "Config.h"

//---------------------------------------------------------------

namespace wikibot
{
    // Configuration
    void configure(int config_type, wikibot::Config config);
    void read_config(wikibot::Config config);
    void write_config(wikibot::Config config);

    // Help
    void print_help(void);
    void print_help(const std::string help_keyword);

    // Login & logout
    void login(wikibot::User user);
    void logout(wikibot::User user);
}

#endif
