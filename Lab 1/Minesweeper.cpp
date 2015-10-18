/*
Crystal Stevens
Lab 1
CST 211
*/

#include "Minesweeper.h"
#include <stdlib.h>

Minesweeper::Minesweeper()
{

}


Minesweeper::~Minesweeper()
{

}

/*********************************************************************
Makes a "beginner" level gameboard which is 10 x 10 and has 10 mines. 
It starts out with all tiles marked as "covered"
************************************************************************/
void Minesweeper::Beginner()
{
	setBoardSize(10, 10);
	int mines = 0;
	while (mines < 10)
	{
		/*******************************************************************
		Loops through the array and places either a mine or an empty cell
		based on output from RNG
		********************************************************************/

		for (int r = 0; r < 10; ++r)
		{
			for (int c = 0; c < 10; ++c)
			{
				for (int idx = 0; idx < r*c; ++idx)
				{
					
					if ((1 + (rand() % 10)) == 1)
					{
						
						setBoard(getMine());
					}

					else
					{
						setBoard(getBlank());
					}
				}
			}
		}
	}

}

/************************************************************************
Makes an "Intermediate" level gameboard which is 16 x 16 and has 40 mines.
It starts out with all tiles marked as "covered"
************************************************************************/
void Minesweeper::Intermediate()
{
	setBoardSize(16, 16);
	int mines = 0;
	//while (mines < 40)
}

/************************************************************************
Makes an "Expert" level gameboard which is 16 x 30 and has 100 mines.
It starts out with all tiles marked as "covered"
************************************************************************/
void Minesweeper::Expert()
{
	setBoardSize(16, 30);
	int mines = 0;
	//while (mines < 100)
}

void Minesweeper::selectCell(int row, int col)
{
	// display the cell which is set in setCell() in the game level 
}

//void Minesweeper::play()
//{
//	
//
//}