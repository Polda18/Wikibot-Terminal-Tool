/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: locale.cs-CZ.cpp
 * Description: Czech Republic - Czech locale file
 ***************************************************************/

#include "locale.h"

// General locale strings
wikibot::locale::general::done_capt          = "Hotovo";
wikibot::locale::general::error_capt         = "Chyba!";
wikibot::locale::general::info_config_fopen  = "Otevírám soubor kofigurace ... ";
wikibot::locale::general::info_config_fwrite = "Zapisuji do souboru konfigurace ... ";
wikibot::locale::general::info_config_memcpy = "Zapisuji do paměti ... ";

// Logger locale strings
wikibot::locale::logger::error_fopen        = "Soubor se nepodařilo otevřít.";
wikibot::locale::logger::error_fwrite       = "Do souboru nelze zapisovat.";
wikibot::locale::logger::info_config_fread  = "Čtení ze souboru konfigurace";
wikibot::locale::logger::info_config_fwrite = "Zápis do souboru konfigurace";
wikibot::locale::logger::info_config_memcpy = "Zápis do paměti";

// Header locale strings
wikibot::locale::header::program_name = "Wikibot Terminal Tool";
wikibot::locale::header::version      = "v0.1 BETA";

// Check for server online status locale strings
wikibot::locale::online_check::checking_wiki_server = "Kontroluji dostupnost wiki serveru";
wikibot::locale::online_check::checking_main_script = "Kontroluji dostupnost hlavního skriptu wikibota";
wikibot::locale::online_check::checking_json_define = "Kontroluji dostupnost definičního JSON souboru wikibota";

// Login session locale strings
wikibot::locale::login::uname_capt = "Login > ";
wikibot::locale::login::passw_capt = "Heslo > ";

// Configuration session locale strings
wikibot::locale::config::head_missing     = "Soubor konfigurace chybí nebo je poškozen. Vytvořte novou konfiguraci.";
wikibot::locale::config::head_capt        = "Konfigurace wikibota. Postupujte dle instrukcí.\nPro více informací si přečtěte manuál.";
wikibot::locale::config::wiki_server_capt = "Definujte používaný wiki server > ";
wikibot::locale::config::main_script_capt = "Definujte URL hlavního skriptu wikibota > ";
wikibot::locale::config::json_define_capt = "Definujte URL definičního JSON souboru wikibota > ";

// Command loop session locale strings
wikibot::locale::command_loop::prompt           = "Váš příkaz > ";
wikibot::locale::command_loop::syntax_incorrect = "Syntaxe zadaného příkazu není správná. Zadejte příkaz 'help' pro nápovědu.";
wikibot::locale::command_loop::command_unknown  = "Neznámý příkaz. Zadejte příkaz 'help' pro nápovědu.";
wikibot::locale::command_loop::not_logged_in    = "Nejste přihlášen. Přihlaste se příkazem 'login <jméno bota> <heslo>'.";

// Help locale strings
wikibot::locale::help::general::header = "Zadejte téma obsahující seznam relevantních příkazů ze seznamu níže:";
wikibot::locale::help::general::line1  = "  configuration => Informace a příkazy týkající se konfigurace bota";
wikibot::locale::help::general::line2  = "  execution     => Informace a příkazy týkající se vzdáleného ovládání";
wikibot::locale::help::general::line3  = "  useraccount   => Informace o uživatelském účtu wikibota";
wikibot::locale::help::general::line4  = "  maintenance   => Informace o údržbě místní i vzdálené";
wikibot::locale::help::general::line5  = "  emergency     => Příkazy, které lze použít v případě nouze";
wikibot::locale::help::general::usage  = "Zadejte příkaz 'help <téma>' pro informace, které Vás zajímají.";
