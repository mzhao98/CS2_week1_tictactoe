#include <iostream>
#include <cmath>
#include "game.hpp"
#include "board.hpp"
using namespace std;



/**
* @brief Constructs a blank board TicTacToe.
* @param takes no parameters
* @return creates a new TicTacToe board
*/
Game::Game()
{
    TicTacToe = new Board();
}

/**
* @brief prints out the tictactoe board for viewing.
* @param takes no parameters
* @return returns nothing, prints the tictactoe board.
*/
void Game::Print(){
	cout<<"\n";
	for (int i = 0; i<3; i++){
		for (int j =0; j<3; j++){
			cout<< TicTacToe->Query(i,j) <<"|";
		}
		cout<<"\n------\n";
	}
	
}


/**
* @brief Runs the tictactoe game.
* @param no params
* @return returns nothing, runs the control methods for the game
*/
void Game::Run()
{
	int x;
	int y;
	current_player = 1;
	other_player = 2;
	
	do{
		this->Print();
	
		
		cout<<"Player "<<current_player<<"'s turn. Enter x-coordinate"
		<<endl;
		cin>>x;
		cout<<"Player "<<current_player<<"'s turn. Enter y-coordinate"
		<<endl;
		cin>>y;
		
		if (TicTacToe->Query(x,y)!=0){
			cout<<"Spot Full"<<endl;
		}
		
		else{
			TicTacToe->Place(x,y,current_player);
		int temp = current_player;
		current_player = other_player;
		other_player = temp;
	}
	}while(TicTacToe->CheckDraw() == false && TicTacToe->CheckWin() 
	== 0);
	
	if (TicTacToe->CheckDraw() == true){
		cout<<"It's a draw!"<<endl;
		TicTacToe->Reset();
		}
		
	if (TicTacToe->CheckWin() != 0){
		cout<<"The winner is Player "<<TicTacToe->CheckWin()<<endl;
		TicTacToe->Reset();
	}
	
	
}



