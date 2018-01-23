/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: Config.cpp
 * Description: Configuration class for storing config data
 ***************************************************************/

#include "Config.h"

wikibot::Config::Config(void) {
    wiki_server = nullptr;
    main_script = nullptr;
    definitions_file = nullptr;
}

// Get wiki server host name wikibot operates on
std::string wikibot::Config::get_wiki_server(void) {
    return wiki_server;
}

// Get wikibot main script full URL
std::string wikibot::Config::get_main_script(void) {
    return main_script;
}

// Get wikibot functions and commands JSON definition full URL
std::string wikibot::Config::get_definitions_file(void) {
    return definitions_file;
}

// Set wiki server host name wikibt operates on
void wikibot::Config::set_wiki_server(std::string hostname) {
    wiki_server = hostname;
}

// Set wikibot main script full URL
void wikibot::Config::set_main_script(std::string fullurl) {
    main_script = fullurl;
}

// Set wikibot functions and commands JSON definition full URL
void wikibot::Config::set_definitions_file(std::string fullurl) {
    definitions_file = fullurl;
}
