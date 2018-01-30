---
layout: default
---

This is a project documentation website for _Wikibot Terminal Tool_. Here you can find all useful information for further development and tool usage as well.

# [](#quick)Quick Overview
This tool lets you configure your wikibot online using you OS command line/terminal.

## First setup
When the program launches, it searches for `config.cfg` file and attempts to read it. If the file can't be found or some configuration lines seem to be unknown, the program asks for new configuration of missing lines. Since `config.cfg` isn't shipped with program ZIP distribution, program asks for brand new configuration as config file is missing. The configuration file is text format file with a configuration `key=value` assignment on each line (read page _“Configuration files”_), so it is easily readable and editable. If the file gets corrupted (large parts seem to be unreadable, file is empty, etc.), delete it and let the program create new configuration. The configuration contains following specifications:
* Wiki server host domain the wikibot operates on
* Wikibot main script (could be any programming language, but should be on a public server and publicily accessible)
* Wikibot functions and commands JSON definition (should be on a public server and publicily accessible)

If for some reason the config file can't be saved, the configuration is saved only for current session and gets forgot after program terminates. If you encounter this issue, check if the program has permissions to write in its own directory.

# [](#links)Project links
* [Configuration files](config_files)
* [Source code](source)
* [Binary executables](binaries)
* [Documentation Table of Contents](toc)

_PROJECT PAGES COMING SOON_
