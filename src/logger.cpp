/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: logger.cpp
 * Description: Wikibot logger class for logging into file
 ***************************************************************/

#include "logger.h"

void wikibot::logger::log(std::string line, std::string file)
{
    time_t t = time(0);
    struct tm * now = local_time(&t);
    
    std::string log_line = "<"
                         + (now->tm_year + 1900) + "-"
                         + (now->tm_mon + 1) + "-"
                         + now->tm_mday + " "
                         + now->tm_hour + "."
                         + now->tm_min + ":"
                         + now->tm_sec + "> "
                         + line;
    
    if(file.equal(wikibot::logger::errors))
        std::cerr << log_line << std::endl;
    else
        std::cout << log_line << std::endl;
    
    std::ofstream logfile(file, std::ios_base::app);
    logfile << log_line << std::endl;
    logfile.close();
}
