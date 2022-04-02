
#ifndef __CREATE_GAME_H__
#define __CREATE_GAME_H__

#include "board.h"

/**
 * Function that gets from the players details to create the board for the game
 * Details collected include
 * Names of the players
 * Each players colour (R - red, B- Black)
 * This function then initializes a Connect 4 board game according to the details given by the players
 */
void initializeBoard(board *, char[], char[]);


/**
 * Function that decides who the first player is using a random number generator
 * 
 */
void decideFirstPlayer(board *);

#endif // __CREATE_GAME_H__
