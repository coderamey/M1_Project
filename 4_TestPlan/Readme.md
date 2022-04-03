# Test Plan :


## High level test plan

|Test ID  |        Description        |  Exp I/P  |                   Exp O/P                | Actual Out  |Type Of Test  |
| ------- | ------------------------- |---------- | -----------------------------------------|------------|-------------- |
| H_01    | Testing the user interface|user choice|creates a new game/ exting the application|	PASS      | Scenario based|
| H_02    | Testing the create game   |user choice|initializing a new boardgame              |  PASS      | Technical     |                 
|         |function	                  |           |                                          |            |               |
| H_03    | Testing the working of the| user move |updating the board, declaring the winner, |  PASS      | Scenario based| 
|         | game controlling modules  |           |terminating the game if the board is full |            | ,technical    |

# Low level test plan:
|Test ID  |        Description          |          Exp I/P         |                   Exp O/P                | Actual Out |   Type Of Test   |
| ------- | --------------------------- |------------------------- | -----------------------------------------|------------|----------------- |
| L_01    | calling the function        |user choice 1             |board object is initialized               |	 PASS      | Scenario based   |
|         |initializeBoard() to check   |                          |                                          |            |                  |
|         |board content intialized     |                          |                                          |            |                  |
| L_02    |checking the various aspect  |a player move that result |the connect is detected,the winner is     |  PASS      | scenario based   |                 
|         | of the function playerMove()|results in a connect 4    |  declared and the game is terminated     |            |                  |
|         |                             |horizontally              |                                          |            |                  |
| L_03    |calling function dropPiece() | column number            |updation of the content of a particular   |content of  | requirement based| 
|         |                             |                          |cell in the game board                    |cell updated|                  |
