/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.h
 ***************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

#include "Config.h"
#include "logger.h"
#include "locale/locale.h"

//---------------------------------------------------------------

// Configuration
void configure(int config_type);
void read_config(void);
void write_config(void);

#endif