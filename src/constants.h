/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: constants.h
 * Description: Constants definition for the tool
 ***************************************************************/

#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace wikibot
{
    namespace constant
    {
        const unsigned int error_connection_timeout        = 0x00000001;
        const unsigned int error_connection_interrupted    = 0x00000002;
        const unsigned int error_command_fail              = 0x00000004;
        const unsigned int error_config_fail               = 0x00000008;
        const unsigned int message_connection_established  = 0x00000010;
        const unsigned int message_wikibot_logged_in       = 0x00000020;
        const unsigned int message_wikibot_logged_out      = 0x00000040;
        const unsigned int message_command_successful      = 0x00000080;
        const unsigned int message_config_successful       = 0x00000100;
    }
}

#endif
