/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.cpp
 * Description: Functions definition file (source code)
 ***************************************************************/

#include "functions.h"

void wikibot::configure(int config_type) {
    switch(config_type) {
        case 1:
            config_wiki_server();
            break;
        case 2:
            config_main_script();
            break;
        case 3:
            config_definitions_file();
            break;
        default:
            break;
    }
}
