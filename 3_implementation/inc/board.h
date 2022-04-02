

 #ifndef __BOARD_H__
 #define __BOARD_H__

/**
 * Structure that contains all the details of the current Connect4 board game such the rows, columns, player's names, colour of player's coins
 * current player, the winner, the current row in a given column where the coin dropped by the user will fall and the contents of the board;
 */

 typedef struct boardgame
 {
    int numberOfRows;
    int numberOfColumns;
    int numToConnect;
    int currRowPlaceCoin[6];
    char playerName[2][100];
    char playerColour[2];
    int currentPlayer;
    int winner;
    char boardContents[6][7];
 }board;

 #endif
