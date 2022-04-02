# Requirements
## Introduction
Connect Four is a two-player game with perfect information for both sides, meaning that nothing is hidden from anyone. Connect Four also belongs to the classification of an adversarial, zero-sum game, since a player's advantage is an opponent's disadvantage.

One measure of complexity of the Connect Four game is the number of possible games board positions. For classic Connect Four played on a 7-column-wide, 6-row-high grid, there are 4,531,985,219,092 positions[5] for all game boards populated with 0 to 42 pieces.

The game was first solved by James Dow Allen (October 1, 1988), and independently by Victor Allis (October 16, 1988).[6] Allis describes a knowledge-based approach,[7] with nine strategies, as a solution for Connect Four. Allen also describes winning strategies[8][9] in his analysis of the game. At the time of the initial solutions for Connect Four, brute-force analysis was not deemed feasible given the game's complexity and the computer technology available at the time.

![1020px-Connect_Four](https://user-images.githubusercontent.com/101514346/161379238-06f32d5e-2f28-402a-aae6-bf65ed96def4.jpg)

Here, this popular board game has been recreated digitally.

#Research
This game was first sold under the Connect 4 trademark by Milton Bradley in 1974
Connect 4 is a perfect information, zero sum game that was first solved by James Dow Allen (1 October, 1988) and independently by Victor Allis (16 October, 1988)
The solution shows that Connect 4 is a first player win game.
There have been many variations on Connect 4 that include changing the board size (traditionally 6x7) and game rules. Some variations of the game are listed below
Infinite Connect-four
Cylinder Infinite Connect-four
Hasbro's connect 4
Pop Out
Pop 10
5-in-aRow
Power-Up

# Cost and Features
Resources used include a 64-bit computer and memory

# Defining Our System
The system has a user interface which allows the players to start a new game
Once started, the game is managed by the computer which takes care of storing the players' move's, discarding illegal moves, analysing the board after each move to find the winning move, and terminating the game if there are no moves left.
The high level system design is shown in the figure below

![SysDes](https://user-images.githubusercontent.com/101514346/161384643-cc8ceb72-5d8e-4b9d-ade2-8283c6e028a0.png)

# SWOT ANALYSIS

![SWOT](https://user-images.githubusercontent.com/101514346/161384831-caa05397-d44a-40c8-b7cd-2a3a5353fdd4.png)

# 4W's and 1'H
## Who:
For all people who want to play the game with another person, but currently don't have access to the physical components.

## What:
To recreate a popular physical game in a digital version so that people can enjoy playing it, without the hassle of searching for the required physical equipment.

## When:
Can be played anytime

## Where:
Can be played anywhere, ease of use

## How:
Played on a system, using a computer

# Detail requirements
## High Level Requirements:
| ID     |              Description                     |     Status           |
| ------ | -------------------------------------------- | -------------------- |
|  HL01  | User Interface                               | Implemented          |
|  HL02  | Creating a new game                          | Implemented          |
|  HL03  | Managing the game played between two players | Implemented          |

# Low level Requirements:
| ID     |              Description                                                                   |     Status           |
| ------ | ------------------------------------------------------------------------------------------ | -------------------- |
|    01  | Menu which asks the user if they want to play a new game or leave                          | Implemented          |
|    02  | Initialising a new game if the user chooses to play                                        | Implemented          |
|    03  | Choosing the first player using a random function                                          | Implemented          |
|    04  | Allowing each player to perform their moves                                                | Implemented          |
|    05  | Analysing the moves performed to find illegal moves                                        | Implemented          | 
|    06  |Analysing the board after every move to determine if the board is full and the game is over | Implemented          |
|    07  |A variable to keep track of current player,so that each player's is able to play their turn | Implemented          |
