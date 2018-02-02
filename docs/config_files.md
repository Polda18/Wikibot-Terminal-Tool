---
layout: default
---

# Configuration files
There are two kinds of configuration files. A client one, called `config.cfg`, which stores the local configuration in its own format (see below). And a server one, called whatever, which stores functions and commands specific for your own wikibot in JSON format (see syntax tree example below).

## Local configuration
It's simple `key=value` pair assignment, each one per line. There are actually three keys recognised by the program (and it won't change in next development, probably), the rest is simply ignored. If one or more keys are missing, it asks for new configuration for that particular missing assignments. The recognised assignments are as follows:

```config
wiki_server=cs.wikipedia.org
wbot_mainscript=https://www.example.com/wikibot/main.php
wbot_funcscomdef=https://www.example.com/wikibot/definitions.json
```

* `wiki_server` is the Wiki server host domain the wikibot operates on.
* `wbot_mainscript` is full URL (including protocol) for the main script for the wikibot. It can be any language. Here I am using PHP.
* `wbot_funcscomdef` is full URL (including protocol) for the functions and commands definitions in JSON format. Doesn't have to be used by the actual wikibot, though. But it is required to be used with this terminal based tool.

Remember that the full URL configuration entries need to be publicily available, without any password set.

## Server JSON configuration
In order to make the wikibot tool work, it needs to know functions the wikibot is capable of and command the wikibot listens to. See a fictional syntax tree example below in order to gain some information about how the program reads the functions and commands from your wikibot. Looks like this:

```json
{
    "functions": {
        "wbot_manual_typos": [
            {
                "num_articles": "int"
            },
            {
                "list_articles": "string"
            }
        ],
        "wbot_config_typos": [
            {
                "num_articles": "int",
                "hours_period": "float"
            },
            {
                "list_articles": "string",
                "hours_period": "float"
            }
        ]
    },
    "commands": {
        "manual": [
            {
                "typos": [
                    {
                        "num_articles": "int"
                    },
                    {
                        "list_articles": "string"
                    }
                ]
            }
        ],
        "configure": [
            {
                "typos": [
                    {
                        "num_articles": "int",
                        "hours_period": "float"
                    },
                    {
                        "list_articles": "string",
                        "hours_period": "float"
                    }
                ]
            }
        ]
    }
}
```

The `functions` JSON key assignment is the script input, based on the functions definition list inside the main script. This is used when calling the function from the server script after remote command execution. The `commands` JSON key assignment is what goes into the command line input inside the terminal listener after the local command `execute`, which executes remote command defined in this list.

_[Back to home page](index)_&hellip;
