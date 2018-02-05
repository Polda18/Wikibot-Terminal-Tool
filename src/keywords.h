/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: keywords.h
 * Description: Command keywords definition
 ***************************************************************/

#ifndef KEYWORDS_H
#define KEYWORDS_H

#include <string>

namespace wikibot
{
    namespace command
    {
        const std::string help = "help";
        const std::string quit = "quit";
        const std::string login = "login";
        const std::string logout = "logout";
        const std::string execute = "execute";
        const std::string config = "config";
        const std::string stop = "stop";
        const std::string start = "start";

        namespace help
        {
            namespace topic
            {
                const std::string configuration = "configuration";
                const std::string execution = "execution";
                const std::string maintenance = "maintenance";
                const std::string useraccount = "useraccount";
                const std::string emergency = "emergency";
            }

            namespace command
            {
                const std::string quit = "quit";
                const std::string login = "login";
                const std::string logout = "logout";
                const std::string execute = "execute";
                const std::string config = "config";
                const std::string stop = "stop";
                const std::string start = "start";
            }
        }

        namespace config
        {
            const std::string wiki = "wiki";
            const std::string script = "script";
            const std::string definition = "definition";
        }
    }
}

#endif
