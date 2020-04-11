/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include <stdbool.h>
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=6"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 31;         /* -h option; minimum height of a menu line     */

static const char xcol[4][8] = {
	//background
	"color0",
	//foreground
	"color2",
	//selection background 
	"color2",
	//selection foreground 
	"color0",
};


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = "";
static bool key_mode = false; //use single key mode by default or not
