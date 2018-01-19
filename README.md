# Wikibot Terminal Tool
Terminal tool (Windows &amp; Unix type) for a specified wikibot. Under construction.<br />
This terminal tool is supposed to be used for your wikibot control.

## First setup & program usage:
* When you first run your Wikibot Terminal Tool application copy, it will ask for basic statements:
  * Wiki server host where your wikibot operates on (used for auhentication of the owner, to prevent griefing)
  * Wikibot's main program class file URL (include full URL, including HTTP(S) protocol)
  * Wikibot's functions definitions JSON file URL (doesn't need to be used by bot, but is required by this terminal tool - read specification in `wiki`)
* _FROM THERE DOWN, THIS IS WHERE IMPLEMENTATION STILL HANGS ON_
* If the configuration can't be saved (file corrupted, write permission denied, etc.), the app will store the configuration for current session. Next time when your run the program again, it won't remember these settings. If you want to save your configuration, make sure to check for write permission as well as read-only or corrupted file that needs to be deleted or unlocked in order to store your config. That file, named "config.cfg" sits in the same directory as program executable. You do not need to create the file, program will create it itself.
* After you set up your configuration, terminal checks for online status and starts listening for commands. Start with `login` command, which will start login session. For safety reasons, your input is hidden from prompt lines in order to prevent login credentials theft from stalky people. However, check for keylogger in your software installs for full safety. If you accidentaly run the program, end the session using `quit` command.
* Login credentials are used for bot owner authentication. Only bot owner should know the login credentials of his bot.
* When login fails (incorrect login credentials), program asks you for login again. Number of login attempts is unlimited.
* Program checks for wiki server and bot script files online status (running or down) before commands listening. If the wiki server is down or bot script files are unreachable (unable to connect), program ends with a message to try again later.
* After successfully connected and logged in, you can write other commands (see `wiki/help` on GitHub repository for full details).
* When you got all neccessary changes to your bot done, you can logout (simply use `logout` command, takes no parameters)
* After logout or session end, program will halt command line with key press prompt. After key stroke, the program ends.
