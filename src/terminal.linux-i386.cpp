/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: terminal.linux-i386.cpp
 * Description: Implementation of terminal input hide function
 *              Linux version
 ***************************************************************/

#include <termios.h>
#include <unistd.h>

#include "terminal.h"

termios oldt;
tcgetattr(STDIN_FILENO, &oldt);

void terminal::hide_input(void)
{
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

void terminal::show_input(void)
{
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
