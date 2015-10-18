/*
Crystal Stevens
Lab 1
CST 211
*/

#include "Cell.h"

#pragma once
class Board : public Cell
{
public:
	Board();
	~Board();

	char startBoard(int row, int col);
	void setBoardSize(int row, int col);
	void setBoard(char value);
	char getBoard();
	
protected:
	char ** m_gameboard;
	int m_row;
	int m_col;

};

