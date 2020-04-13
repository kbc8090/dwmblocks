//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Updates: ",	"~/.local/bin/pacupdate",	900,	0},
	{" ",			"~/.local/bin/volume",	3,	0},
	{" ",			"~/.local/bin/kernel",	36000, 0},
	{" ",			"~/.local/bin/memory",	5,	0},
	{" ",			"~/.local/bin/clock",	5,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
