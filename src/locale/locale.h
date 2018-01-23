/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: locale.h
 ***************************************************************/

#ifndef LOCALE_H
#define LOCALE_H

#include <string>

class wikibot {
    class locale {
        class general {
            // General locale strings
        public:
            std::string done_capt;
            std::string error_capt;
            std::string error_fopen;
            std::string error_fwrite;
            std::string info_config_fopen;
            std::string info_config_memcpy;
            std::string info_config_fwrite;
            std::string log_capt;
            std::string log_run;
            std::string log_error;
        };
        
        class header {
            // Header locale strings
        public:
            std::string program_name;
            std::string version;
        };

        class online_check {
            // Check of server online state locale strings
        public:
            std::string checking_wiki_server;
            std::string checking_main_script;
            std::string checking_json_define;
        };

        class login {
            // Login session locale strings
        public:
            std::string uname_capt;
            std::string passw_capt;
        };

        class config {
            // Configuration session locale strings
        public:
            std::string head_capt;
            std::string wiki_server_capt;
            std::string main_script_capt;
            std::string json_define_capt;
        };

        class command_loop {
            // Command loop session locale strings
        public:
            std::string prompt;
            std::string syntax_incorrect;
            std::string command_unknown;
        };
    };
};

#endif
