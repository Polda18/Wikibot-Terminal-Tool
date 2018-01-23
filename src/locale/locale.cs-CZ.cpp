/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: locale.cs-CZ.cpp
 * Description: Czech Republic - Czech locale file
 ***************************************************************/

#include "locale.h"

// General locale strings
wikibot::locale::general::done_capt = "Hotovo";
wikibot::locale::general::error_capt = "Chyba!";
wikibot::locale::general::error_fopen = "Soubor se nepodařilo otevřít";
wikibot::locale::general::error_fwrite = "Do souboru nelze zapisovat";
wikibot::locale::general::info_config_fopen = "Otevírám soubor kofigurace ... ";
wikibot::locale::general::info_config_fwrite = "Zapisuji do souboru konfigurace ... ";
wikibot::locale::general::info_config_memcpy = "Zapisuji do paměti ... ";
wikibot::locale::general::log_capt = "Záznam";
wikibot::locale::general::log_error = "[CHYBA]";
wikibot::locale::general::log_run = "[PROTOKOL]";

// Header locale strings
wikibot::locale::header::program_name = "Wikibot Terminal Tool";
wikibot::locale::header::version = "v0.1 BETA";

// Check for server online status locale strings
wikibot::locale::online_check::checking_wiki_server = "Kontroluji dostupnost wiki serveru";
wikibot::locale::online_check::checking_main_script = "Kontroluji dostupnost hlavního skriptu wikibota";
wikibot::locale::online_check::checking_json_define = "Kontroluji dostupnost definičního JSON souboru wikibota";

// Login session locale strings
wikibot::locale::login::uname_capt = "Login > ";
wikibot::locale::login::passw_capt = "Heslo > ";

// Configuration session locale strings
wikibot::locale::config::head_capt = "Konfigurace wikibota. Postupujte dle instrukcí.\nPro více informací si přečtěte manuál.";
wikibot::locale::config::wiki_server_capt = "Definujte používaný wiki server > ";
wikibot::locale::config::main_script_capt = "Definujte URL hlavního skriptu wikibota > ";
wikibot::locale::config::json_define_capt = "Definujte URL definičního JSON souboru wikibota > ";

// Command loop session locale strings
wikibot::locale::command_loop::prompt = "Váš příkaz > ";
wikibot::locale::command_loop::syntax_incorrect = "Syntaxe zadaného příkazu není správná. Zadejte příkaz 'help' pro nápovědu.";
wikibot::locale::command_loop::command_unknown = "Neznámý příkaz. Zadejte příkaz 'help' pro nápovědu.";
