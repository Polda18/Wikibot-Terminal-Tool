/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: locale.h
 * Description: General locale header file
 ***************************************************************/

#ifndef LOCALE_H
#define LOCALE_H

#include <string>

namespace wikibot
{
    namespace locale
    {
        namespace general
        {
            // General locale strings
            const std::string done_capt;
            const std::string error_capt;
            const std::string info_config_fopen;
            const std::string info_config_memcpy;
            const std::string info_config_fwrite;
        }

        namespace logger
        {
            // Logger locale strings
            const std::string error_fopen;
            const std::string error_fwrite;
            const std::string info_config_fread;
            const std::string info_config_fwrite;
            const std::string info_config_memcpy;
        }
        
        namespace header
        {
            // Header locale strings
            const std::string program_name;
            const std::string version;
        }

        namespace online_check
        {
            // Check of server online state locale strings
            const std::string checking_wiki_server;
            const std::string checking_main_script;
            const std::string checking_json_define;
        }

        namespace login
        {
            // Login session locale strings
            const std::string uname_capt;
            const std::string passw_capt;
        }

        namespace config
        {
            // Configuration session locale strings
            const std::string head_missing;
            const std::string head_capt;
            const std::string wiki_server_capt;
            const std::string main_script_capt;
            const std::string json_define_capt;
        }

        namespace command_loop
        {
            // Command loop session locale strings
            const std::string prompt;
            const std::string syntax_incorrect;
            const std::string command_unknown;
            const std::string not_logged_in;
        }

        namespace help
        {
            namespace general
            {
                const std::string header;
                const std::string line1;
                const std::string line2;
                const std::string line3;
                const std::string line4;
                const std::string line5;
                const std::string usage;
            }
            
            namespace topic
            {
                // CONTINUE HERE
            }
            
            namespace command
            {
                // CONTINUE HERE
            }
            
            namespace error
            {
                const std::string invalid_argument_capt;
                const std::string invalid_argument_end;
            }
        }
    }
}

#endif
