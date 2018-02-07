
/***************************************************************
 * Wikibot Terminal Tool - by Polda18
 * LICENCE: GNU-GPL-v3.1
 * 
 * File: terminal.win32.cpp
 * Description: Implementation of terminal input hide function
 *              Windows version
 ***************************************************************/

#include <windows.h>

#include "terminal.h"

HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
DWORD mode = 0;

void terminal::hide_input(void)
{
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
}

void terminal::show_input(void)
{
    SetConsoleMode(hStdin, mode);
}
