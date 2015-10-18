/*
Crystal Stevens
Lab 1
CST 211
*/

#include "Board.h"
#include "Cell.h"

#pragma once
class Minesweeper : Board
{
public:
	Minesweeper();
	~Minesweeper();

	void play();
	void Beginner();
	void Intermediate();
	void Expert();

	void selectCell(int row, int col);
};

