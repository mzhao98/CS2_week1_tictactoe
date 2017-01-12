#ifndef _GAME
#define _GAME

#include "board.hpp"
class Game
{
private:
	Board *TicTacToe;
    int current_player;
    int other_player;
public:
    Game();
	void Print();
    void Run();
    
};
#endif
