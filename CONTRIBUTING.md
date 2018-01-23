# Contributing Guidelines
If you want to contribute in project, make sure to first contact me, so I know something is up.
For contribution, make a new branch containing your username and what are you contributing for. See below list of what could you contribute

## List of contributable items
* Locales - Always appreciate your interest in locales translations. Feel free to translate in any language. Stay in UTF-8 encoding.
  Also, keep in mind that I need to map UTF-8 into locale-specific MS-DOS codepage for Windows Command Line using `g++` switch.
  Languages not supported by MS-DOS codepage system will be accepted, but only for Unix based OS.
  Windows release will be leaved without support for these languages. Keep your locale filename in this format: `locale.en-US.cpp`.
  `en-US` is whatever standard ISO defined locale code for both language (`en`) and country (`US`) specific locale.
  Locale files are in C++ source code files, all including the same header `locale.h` file.
  This allows me for locale specific compile options.
* Your own libraries - Eighter an independent suited library licenced under GNU GPL v3 compatible licence,
  or a library specifically made up for this project, all of them are always appreciated.
* Solutions - Once asked, you may contribute your solution to decribed issue. This is also one of the things
  that truly require branching. I'm pretty sure that there will be lots of branches per issue.
* Bug fixes - Once found, feel free to fix a bug yourself, if you know how. This is also another one of the things
  that truly require branching.
* Makefile script suggestions and contributions - A makefile is required for building the project.
  If you have a suggestion on how to improve the makefile, then feel free to submit it. Also, you can contribute directly makefile code.
* Dynamic libraries - Eighter an independent suited library licenced under GNU GPL v3 compatible licence,
  or a precompiled dynamic library or dynamic library source code, including full documentation and source header file
  for library functions usage, is also something to contribute.

## Branching and pull requests
Not all contributions need its own branch. You can always contribute using an existing branch if it meets the requirements.
And those are like following:
* Each contributor needs to identify himself in a branch name. Therefore minimum of 1 branch per contributor.
* List of contributions is treated as individual branches per contributor. Therefore if you want to contribute let's say
  locale and library, then it's 2 branches for you. Every other contribution kind requires additional branch. It's required for
  easy browsing in contributions history and for easy branch merging. Some branches may be discarded, some merged, it depends on
  how much quality does each contribution contain. The best contributions will make it to the project.
* You have to always make a pull request unless you're added into the project contributors list.
  If you want to be permanent contributor, contact me. Only permanent contributors are displayed in project summary.
