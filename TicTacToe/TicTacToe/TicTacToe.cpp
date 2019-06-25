#include "TicTacToe.h"
#include <iostream>


TicTacToe::TicTacToe()
{
	board[9] = { 0 };
	std::cout << "Choose X or O: ";
	std::cin >> player;
}


TicTacToe::~TicTacToe()
{
}

void TicTacToe::makeMove()
{
	system("cls");
	printBoard();
	int position;
	do
	{
		std::cout << "Player " << player << " choose a position to play: ";
		std::cin >> position;
	} while ((position > 0 && position < 10) && board[position - 1] == 'O' || board[position - 1] == 'X');

	board[position - 1] = player;
	if (player == 'X')player = 'O';
	else player = 'X';
}


void TicTacToe::printBoard()
{
	std::cout << "+---+---+---+\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		for (int j = 0; j < 3; j++)
		{
			if (board[i * 3 + j] == 'O' || board[i * 3 + j] == 'X')
				std::cout << " " << board[i * 3 + j] << " |";
			else
				std::cout << " " << 1 + i * 3 + j << " |";
		}
		std::cout << "\n+---+---+---+\n";
	}
}