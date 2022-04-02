

 #ifndef __GAME_H__
 #define __GAME_H__

#include "board.h"

 /**
 * Function evaluates if it is possible to drop a piece in the column chosen by the user
 * @param[out] boolean returns 0 if the move is invalid and returns 1 if the move is valid
 */
int isLegalMove(int, board *);


void dropPiece(int, board *);

/**
 * Function that evaluates if four coins have been connected after every players turn 
 * @param[in] int row
 * @param[in] int column
 * @param[out] boolean returns 1 if there is a connect of 4 otherwise returns 0
 */
int evaluateConnect4(board *, int, int);

/**
 * Function that allows the player to play their next moves until there is a winner or the board becomes full
 * @param[out] boolean returns 1 if the game has ended and 0 if the game has not ended
 */
int playerMove(board *);

/**
 * Function which checks if the Connect 4 board is full
 * @param[out] boolean returns 1 if the board is full, else returns empty
 */
int boardFull(board *);

/**
 * Function that prints the contents of the board
 * 
 */
void printBoard(board *);


 #endif //__GAME_H__
