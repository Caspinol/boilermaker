BOILERMAKER - quick C project directory setup
==========================================
Creates the followng directory stucture:
```
project_name
|-------src/
|	|-------inc/
|	|-------main.c
|-bin/
|-build/
|-README
|-LICENSE
|-Makefile
```
The Makefile is fully populated and ready to be used but of course you can edit it however you want.
```
boilermaker <project_name> [options]
	    options:
		-r - don't create README
		-l - don't create LICENSE
		-m - don't create Makefile
```
