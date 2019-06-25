#pragma once
class TicTacToe
{
public:
	char board[9];
	char player;
	TicTacToe();
	~TicTacToe();
	void makeMove();
	void printBoard();
};

