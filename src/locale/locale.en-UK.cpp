/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: locale.en-UK.cpp
 * Description: United Kingdom - English locale file
 ***************************************************************/

#include "locale.h"

// General locale strings
wikibot::locale::general::done_capt          = "Done";
wikibot::locale::general::error_capt         = "Error!";
wikibot::locale::general::info_config_fopen  = "Opening configuration file ... ";
wikibot::locale::general::info_config_fwrite = "Writing to configuration file ... ";
wikibot::locale::general::info_config_memcpy = "Writing to memory ... ";

// Logger locale strings
wikibot::locale::logger::error_fopen        = "Can't open file.";
wikibot::locale::logger::error_fwrite       = "Can't write to file.";
wikibot::locale::logger::info_config_fread  = "Reading from configuration file";
wikibot::locale::logger::info_config_fwrite = "Writing to configuration file";
wikibot::locale::logger::info_config_memcpy = "Writing to memory";

// Header locale strings
wikibot::locale::header::program_name = "Wikibot Terminal Tool";
wikibot::locale::header::version      = "v0.1 BETA";

// Check for server online status locale strings
wikibot::locale::online_check::checking_wiki_server = "Checking wiki server online state";
wikibot::locale::online_check::checking_main_script = "Checking wikibot main script online state";
wikibot::locale::online_check::checking_json_define = "Checking wikibot JSON definition file online state";

// Login session locale strings
wikibot::locale::login::uname_capt = "Username > ";
wikibot::locale::login::passw_capt = "Password > ";

// Configuration session locale strings
wikibot::locale::config::head_missing     = "Configuration file is missing or corrupted. Create a new configuration.";
wikibot::locale::config::head_capt        = "Wikibot configuration. Continue using instructions.\nRead manual for further details.";
wikibot::locale::config::wiki_server_capt = "Define used wiki server > ";
wikibot::locale::config::main_script_capt = "Define wikibot main script URL > ";
wikibot::locale::config::json_define_capt = "Define wikibot JSON definition file URL > ";

// Command loop session locale strings
wikibot::locale::command_loop::prompt           = "Enter command > ";
wikibot::locale::command_loop::syntax_incorrect = "Entered command syntax is incorrect. Type 'help' for help topics.";
wikibot::locale::command_loop::command_unknown  = "Unknown command. Type 'help' for help topics.";
wikibot::locale::command_loop::not_logged_in    = "You are not logged in. Please, log in using 'login <bot name> <password>' command.";

// Help locale strings
wikibot::locale::help::general::header = "Choose a topic containing list of appropriate commands from following list:";
wikibot::locale::help::general::line1  = "  configuration => Informations and commands about wikibot configuration";
wikibot::locale::help::general::line2  = "  execution     => Informations and commands about remote access";
wikibot::locale::help::general::line3  = "  useraccount   => Informations about wikibot user account";
wikibot::locale::help::general::line4  = "  maintenance   => Informations about local and remote maintenance";
wikibot::locale::help::general::line5  = "  emergency     => Commands to be used in emergency situations";
wikibot::locale::help::general::usage  = "Type 'help <topic>' in command prompt for informations you need.";
