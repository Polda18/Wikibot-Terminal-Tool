/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: logger.cpp
 ***************************************************************/

#include "logger.h"

logger::log(std::string line, std::string file) {
    std::ofstream logfile(file, std::ios_base::app);
    time_t t = time(0);
    struct tm * now = local_time(&t);
    
    logfile << "<"
            << (now->tm_year + 1900) << "-"
            << (now->tm_mon + 1) << "-"
            << now->tm_mday << " "
            << now->tm_hour << "."
            << now->tm_min << ":"
            << now->tm_sec << "> "
            << line << std::endl;
    
    logfile.close();
}