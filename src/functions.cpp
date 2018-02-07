/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.cpp
 * Description: Functions definition file (source code)
 ***************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "Config.h"
#include "logger.h"
#include "locale/locale.h"

#include "keywords.h"
#include "msg_code.h"
#include "terminal.h"

#include "functions.h"

// Local functions definition
void config_wiki_server();
void config_main_script();
void config_definitions_file();

// Library functions implementation
void wikibot::configure(int config_type, wikibot::Config config)
{
    switch(config_type) {
        case 1:
            config_wiki_server(config);
            break;
        case 2:
            config_main_script(config);
            break;
        case 3:
            config_definitions_file(config);
            break;
        default:
            break;
    }
}

void wikibot::read_config(wikibot::Config config)
{
    std::cout << wikibot::locale::general::info_config_fwrite;
    std::ifstream config_file(wikibot::config::filename);
    if(!config_file)
    {
        std::cout << wikibot::locale::general::error_capt << std::endl;
        wikibot::logger::log(wikibot::locale::logger::error_fopen, wikibot::logger::errors);
    }
    else
    {
        std::cout << wikibot::locale::general::info_config_memcpy;
        
        std::string single;
        std::vector<std::string> config_lines;
        
        while(std::getline(config_file, single))
        {
            config_lines.push_back(single);
        }
        
        for(std::string line: config_lines)
        {
            std::istringstream ss(line);
            std::string token;

            std::vector<std::string> config_line;
            while(std::getline(ss, token, '='))
            {
                config_line.push_back(token);
            }

            if(config_line.get(0).equal("wiki_server"))
            {
                if(config_line.size() > 1)
                    config.set_wiki_server(config_line.get(1));
            }
            else if(config_line.get(0).equal("wbot_mainscript"))
            {
                if(config_line.size() > 1)
                    config.set_main_script(config_line.get(1));
            }
            else if(config_line.get(0).equal("wbot_funcscomdef"))
            {
                if(config_line.size() > 1)
                    config.set_definitions_file(config_line.get(1));
            }
        }

        std::cout << wikibot::locale::general::done_capt << std::endl;
        wikibot::logger::log(wikibot::locale::logger::info_config_memcpy, wikibot::logger::runtime);
    }
}

void wikibot::write_config(wikibot::Config config)
{
    std::cout << wikibot::locale::general::info_config_fwrite;
    
    std::ofstream config_file(wikibot::config::filename);
    if(!config_file)
    {
        std::cout << wikibot::locale::general::error_capt << std::endl;
        wikibot::logger::log(wikibot::locale::logger::error_fopen, wikibot::logger::errors);
    }
    else
    {
        config_file << "wiki_server=" << config.get_wiki_server();
        if(config_file.bad())
        {
            std::cout << wikibot::locale::general::error_capt << std::endl;
            wikibot::logger::log(wikibot::locale::logger::error_fwrite, wikibot::logger:errors);
            return;
        }
        
        config_file << "wbot_mainscript=" << config.get_main_script();
        if(config_file.bad())
        {
            std::cout << wikibot::locale::general::error_capt << std::endl;
            wikibot::logger::log(wikibot::locale::logger::error_fwrite, wikibot::logger:errors);
            return;
        }

        config_file << "wbot_funcscomdef=" << config.get_definitions_file();
        if(config_file.bad())
        {
            std::cout << wikibot::locale::general::error_capt << std::endl;
            wikibot::logger::log(wikibot::locale::logger::error_fwrite, wikibot::logger:errors);
            return;
        }

        std::cout << wikibot::locale::general::done_capt << std::endl;
        wikibot::logger::log(wikibot::locale::logger::info_config_fwrite, wikibot::logger::runtime);
    }
}

void wikibot::print_help(void)
{
    std::cout << wikibot::locale::help::general::header << std::endl;
    std::cout << wikibot::locale::help::general::line1 << std::endl;
    std::cout << wikibot::locale::help::general::line2 << std::endl;
    std::cout << wikibot::locale::help::general::line3 << std::endl;
    std::cout << wikibot::locale::help::general::line4 << std::endl;
    std::cout << wikibot::locale::help::general::line5 << std::endl;
    std::cout << std::endl;
}

void wikibot::print_help(const std::string help_keyword)
{
    if(help_keyword.equal(wikibot::command::help::topic::configuration))
        print_help_topic_config();
    else if(help_keyword.equal(wikibot::command::help::topic::emergency))
        print_help_topic_emergency();
    else if(help_keyword.equal(wikibot::command::help::topic::execution))
        print_help_topic_exec();
    else if(help_keyword.equal(wikibot::command::help::topic::maintenance))
        print_help_topic_maintain();
    else if(help_keyword.equal(wikibot::command::help::topic::useraccount))
        print_help_topic_users();
    else
    {
        std::cerr << wikibot::locale::help::error::invalid_argument_capt <<
                     help_keyword << wikibot::locale::help::error::invalid_argument_end << std::endl;
    }
}

void wikibot::login(wikibot::User user)
{
    std::cout << wikibot::locale::login::uname_capt;
    std::getline(std::cin, user.username);
    std::cout << wikibot::locale::login::passw_capt;
    terminal::hide_input();
    std::getline(std::cin, user.password);
    std::cout << std::endl;
    terminal::show_input();
    
    // CONTINUE HERE
}

void wikibot::logout(wikibot::User user)
{
    user.username = null;
    user.username = null;
    user.logged_in = false;
}

// Local functions implementations
void config_wiki_server(wikibot::Config config)
{
    std::cout << wikibot::locale::config::wiki_server_capt;
    std::string configuration;
    std::getline(std::cin, configuration);
    config.set_wiki_server(configuration);
    wikibot::logger::log(wikibot::locale::logger::info_config_memcpy, wikibot::logger::runtime);
}

void config_main_script(wikibot::Config config)
{
    std::cout << wikibot::locale::config::main_script_capt;
    std::string configuration;
    std::getline(std::cin, configuration);
    config.set_main_script(configuration);
    wikibot::logger::log(wikibot::locale::logger::info_config_memcpy, wikibot::logger::runtime);
}

void config_definitions_file(wikibot::Config config)
{
    std::cout << wikibot::locale::config::json_define_capt;
    std::string configuration;
    std::getline(std::cin, configuration);
    config.set_definitions_file(configuration);
    wikibot::logger::log(wikibot::locale::logger::info_config_memcpy, wikibot::logger::runtime);
}
