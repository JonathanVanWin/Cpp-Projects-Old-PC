#include <iostream>
#include "TicTacToe.h"

int main()
{
	TicTacToe game;
	while(1)
	game.makeMove();
	
	game.printBoard();
	std::cin.get();	std::cin.get();
	return 0;
}