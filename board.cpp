#include <iostream>
#include <cmath>
#include "board.hpp"
using namespace std;

/**
 * In the board for this TicTacToe game, player 1 plays the X, and 
 * player 2 plays the O. The board itself labels each spot as the player
 * number (1 or 2) instead of O's and X's.
 */


/**
* @brief Construct a board of 0's, which is a blank board.
* @param takes no params
* @return returns nothing, creates a board
*/
Board::Board()
{
    for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		squares[i][j] = 0;
		}
	}
}

/**
* @brief Query returns player at coordinate spot.
* @param takes an x and y coordinate
* @return returns the player value at x,y
* 
*/
int Board::Query(int x, int y)
{
	return squares[x][y];	
}

/**
* @brief reset clears board
* @param takes no params
* @return returns nothing
*/
void Board:: Reset(){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		squares[i][j] = 0;
		}
	}
}

/**
* @brief Place puts the player into the x,y spot.
* @param takes x and y coordinate and player number
* @return returns nothing, changes the array
*/
void Board::Place(int x, int y, int player)
{
	squares[x][y] = player;	
}

/**
* @brief checkwin checks to see if any player has 3 boxes in a row.
* @param no params
* @return returns the number of player that won
*/
int Board::CheckWin(){
	for (int i=0; i<3; i++){
		if (squares[i][0]!=0 && squares[i][0] == squares[i][1]
		&& squares[i][1] == squares[i][2]){
			return squares[i][0];
		}
		else if (squares[0][i]!=0 && squares[0][i] == squares[1][i]
		&& squares[1][i] == squares[2][i]){
			return squares[0][i];
		}
	}
	if (squares[1][1]!=0 && squares[0][0] == squares[1][1]
		&& squares[2][2] == squares[1][1]){
			return squares[1][1];
		}
	if (squares[1][1]!=0 && squares[0][2] == squares[1][1]
		&& squares[2][0] == squares[1][1]){
			return squares[1][1];
		}
	return 0;
}

/**
* @brief checkdraw checks to see if the board is full and no one has won.
* @param no params
* @return returns whether the game ended in a draw.
*/
bool Board::CheckDraw(){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		if (squares[i][j] == 0){
			return false;
		}
		}
	}
	return CheckWin() == 0;
}


