/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: Config.h
 ***************************************************************/

#include <iostream>
#include <fstream>
#include <string>

class Config {
private:
    std::string wiki_server;
    std::string main_script;
    std::string definitions_file;

public:
    // Constructor
    Config(void);

    // Get configuration points
    std::string get_wiki_server();
    std::string get_main_script();
    std::string get_definitions_file();

    // Set configuration points
    void set_wiki_server(std::string);
    void set_main_script(std::string);
    void set_definitions_file(std::string);
}