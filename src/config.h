#ifndef CONFIG_H
#define CONFIG_H

/* REMEMBER: run 'make' after you modify config to see it's effects */

/* use 2 or 4. 6 takes too much time, odd depths give misguided moves */
#define CONF_DEPTH 4 

/* experimental feature in evaluation function- turn off with 0 */
#define CONF_SUPPORT_ATTACK 1

/* '#' makes the board look more like a chessboard, but then you will have to hunt for pieces. '.' is better */
#define CONF_BLACKSQUARE '~'

/* if nonzero, shows time taken by computer to make a move , position evaluation */
#define CONF_SPECS 1

/* the directory where you wish to put savegame files */
#define CONF_SAVES "../saves/"

/* 1 is small and cute, 2 looks like a board. everything else is considered as 2 */
#define CONF_SIZE 1

/* unicode chess pieces might not work for your locale, turn off if horrible output seen on terminal */
#define CONF_UNICODE_PIECES 1

#endif