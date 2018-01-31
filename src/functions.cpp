/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.cpp
 * Description: Functions definition file (source code)
 ***************************************************************/

#include "functions.h"

// Local functions definition
void config_wiki_server();
void config_main_script();
void config_definitions_file();

// Library functions implementation
void wikibot::configure(int config_type)
{
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

void wikibot::read_config(wikibot::Config config)
{
    // CODE HERE
}

void wikibot::write_config(wikibot::Config config)
{
    // CODE HERE
}

// Local functions implementations
void config_wiki_server()
{
    // CODE HERE
}

void config_main_script()
{
    // CODE HERE
}

void config_definitions_file()
{
    // CODE HERE
}
