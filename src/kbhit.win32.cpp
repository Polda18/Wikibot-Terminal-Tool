/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: kbhit.win32.cpp
 * Description: Implementation of "Press any key to continue"
 *              Windows 32bit variant
 ***************************************************************/

#include <stdio.h>
#include <conio.h>

#include "kbhit.h"

int kbhit(void)
{
    return _kbhit();
}
