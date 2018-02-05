/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: main.cpp
 * Description: Main executable script source code
 ***************************************************************/

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

#include "locale/locale.h"
#include "constants.h"
#include "keywords.h"
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
        std::istringstream ss;
        std::string token;

        while(std::getline(ss, token, ' '))
        {
            command_parse.push_back(token);
        }

        if(command_parse.size() > 0)
        {
            if(command_parse[0].equal(wikibot::command::help))
            {
                if(command_parse.size() > 1)
                    wikibot::print_help(command_parse[1]);
                else
                    wikibot::print_help();
            }
            else if(command_parse[0].equal(wikibot::command::quit))
            {
                std::cout << wikibot::locale::general::exit;
                while(!kbhit());
                break;
            }
            // CONTINUE HERE
        }

        if(wikibot::message::msg_code & wikibot::constant::error_command_fail)
            wikibot::logger::log(wikibot::locale::message::error_command_fail, wikibot::logger::errors);
        else if(wikibot::message::msg_code & wikibot::constant::error_config_fail)
            wikibot::logger::log(wikibot::locale::message::error_config_fail, wikibot::logger::errors);
        else if(wikibot::message::msg_code & wikibot::constant::error_connection_interrupted)
            wikibot::logger::log(wikibot::locale::message::error_connection_interrupted, wikibot::logger::errors);
        else if(wikibot::message::msg_code & wikibot::constant::error_connection_timeout)
            wikibot::logger::log(wikibot::locale::message::error_connection_timeout, wikibot::logger::errors);       
        else if(wikibot::message::msg_code & wikibot::constant::message_command_successful)
            wikibot::logger::log(wikibot::locale::message::message_command_successful, wikibot::logger::runtime);
        else if(wikibot::message::msg_code & wikibot::constant::message_config_successful)
            wikibot::logger::log(wikibot::locale::message::message_config_successful, wikibot::logger::runtime);
        else if(wikibot::message::msg_code & wikibot::constant::message_connection_established)
            wikibot::logger::log(wikibot::locale::message::message_connection_established, wikibot::logger::runtime);
        else if(wikibot::message::msg_code & wikibot::constant::message_wikibot_logged_in)
            wikibot::logger::log(wikibot::locale::message::message_wikibot_logged_in, wikibot::logger::runtime);
        else if(wikibot::message::msg_code & wikibot::constant::message_wikibot_logged_out)
            wikibot::logger::log(wikibot::locale::message::message_wikibot_logged_out, wikibot::logger::runtime);
    }

    return ret;
}
