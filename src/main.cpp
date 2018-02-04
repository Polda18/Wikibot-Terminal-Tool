/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: main.cpp
 * Description: Main executable script source code
 ***************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "locale/locale.h"
#include "functions.h"
#include "logger.h"

int main(void)
{
    int ret = 0;

    wikibot::Config config();

    std::cout << wikibot::locale::header::program_name << std::endl;
    std::cout << wikibot::locale::header::version << std::endl << std::endl;

    std::ifstream configuration(wikibot::config::filename);     // Get configuration first
    if(!configuration)  // Configuration is missing or unreadable
    {
        std::cout << wikibot::locale::config::head_missing << std::endl << std::endl;
        std::cout << wikibot::locale::config::head_capt << std::endl;
        wikibot::configure(1);  // Configure wiki server host domain
        wikibot::configure(2);  // Configure wikibot main script URL
        wikibot::configure(3);  // Configure wikibot JSON definitions URL

        wikibot::write_config();    // Write configuration to file
    }
    else
    {
        configuration.close();  // Close the file stream to free allocation memory

        wikibot::read_config(config);   // Read configuration from the file
    }

    while(true)     // Ensure the endless loop for command listener
    {
        std::cout << wikibot::locale::command_loop::prompt;
        std::string command_line;
        std::getline(std::cin, command_line);
        
        std::vector<std::string> command_parse;
        // CODE HERE
    }

    return ret;
}
