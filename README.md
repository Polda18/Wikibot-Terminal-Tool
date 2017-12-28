# Wikibot Terminal Tool
Terminal tool (Windows &amp; Unix type) for a specified wikibot. Under construction.<br />
This terminal tool is supposed to be used for your wikibot control.

## First setup & program usage:
* When you first run your Wikibot Terminal Tool application copy, it will ask for basic statements:
  * Wiki server host where your wikibot operates
  * Wikibot's main JavaScript filename (stored in bot's userspace)
  * Wikibot's functions definitions (also stored in bot's userspace)
* If the configuration can't be saved (file corrupted, write permission denied, etc.), the app will store the configuration for current session. Next time when your run the program again, it won't remember these settings. If you want to save your configuration, make sure to check for write permission as well as read-only or corrupted file that needs to be deleted or unlocked in order to store your config. That file, named "config.cfg" sits in the same directory as program executable. You do not need to create the file, program will create it itself.
* _THIS IS WHERE IMPLEMENTATION STILL HANGS ON_
* After you set up your configuration, program asks you for bot's login credentials. For safety reasons, your input is hidden from prompt lines in order to prevent login credentials theft from stalky people. However, check for keylogger in your software installs for full safety.
* Login credentials are saved for further use in program memory (encrypted) in case login session token expires.
* When login fails (incorrect login credentials), program asks you for login again. You have up to 3 attempts per hour. First unsuccessful attempt sets clock for next 3 attempts. After 3rd unsuccessfull attempt, program logs date and time of next 3 attempts available in a read-only system protected file and terminates.
* Anyway, before login credentials, program checks for wiki server online status (running or down). If the server is down (unable to connect), program ends with a message to try again later.
* After successfully connected and logged in, you can write commands:
  * `help` for printing out help topics (use `help <topic>` or `help <command>` for further details):
    * `help controls` - print out controls commands list
    * _tbd_
