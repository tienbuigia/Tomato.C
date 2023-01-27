/*
//         .             .              .		    
//         |             |              |           .	    
// ,-. ,-. |-. ,-. . ,-. |  ,_, ,-. ,-. |-. ,-,-. . |- ,_,  
// | | ,-| | | |   | |-' |   /  `-. |   | | | | | | |   /   
// `-| `-^ ^-' '   ' `-' `' '"' `-' `-' ' ' ' ' ' ' `' '"'  
//  ,|							    
//  `'							    
// util.h
*/
#ifndef UTIL_H_
#define UTIL_H_
#include <ncurses.h>

/* Defining the colors pallete size */
#define PALLETE_SIZE (COLOR_WHITE - COLOR_BLACK + 1)

/* Initialize screen with some little configs */
extern void initScreen(void);
/* Set text foreground and background colors */
extern void setColor(short int , short int , chtype );
/* Get the window size */
extern void getWindowSize(appData * );

/* Log funtions */
extern void createLog(appData * );
extern void readLog(appData * );
extern void setLogVars(appData * );
extern void deleteLastLog(appData * );
extern void writeToLog(appData * );

/* Time the pomodoros */
extern void timer(appData * );

#endif

