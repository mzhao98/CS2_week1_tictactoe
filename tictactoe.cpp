#include "board.hpp"
#include "game.hpp"
#include "tictactoe.hpp"

/**
* @brief creates the game tictactoe and runs it
* @param parameters taken but unneeded
* @return returns 0
*/
int main(int argc, char *argv[]){
	Game *TicTacToe = new Game();
	TicTacToe->Run();
	return 0;
}
