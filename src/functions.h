/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: functions.h
 ***************************************************************/

#include <iostream>
#include <fstream>
#include <string>

#include "Config.h"
#include "logger.h"

//---------------------------------------------------------------

// Configuration
void configure(int config_type);
void read_config(void);
void write_config(void);