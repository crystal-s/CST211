/*
Crystal Stevens
Lab 1
CST 211
*/

#include "Board.h"


Board::Board()
{
	m_row = 0;
	m_col = 0;
	m_gameboard = nullptr;
}


Board::~Board()
{
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_gameboard[i];
	}

	delete[] m_gameboard;
}


char Board::startBoard(int row, int col)
{
	m_row = row;
	m_col = col;
	m_gameboard = new char*[row];

	for (int i = 0; i < row; i++)
	{
		m_gameboard[i] = new char[col];
	}

	for (int i = 0; i < m_row; ++i)
	{
		for (int j = 0; j < m_col; ++j)
		{
			m_gameboard[i][j] = getCovered();
		}
	}

	return m_gameboard[m_row][m_col];
}

void Board::setBoard(char value)
{
	for (int r = 0; r < 10; ++r)
	{
		for (int c = 0; c < 10; ++c)
		{

			m_gameboard[r][c] = value;
		}
	}
}


void Board::setBoardSize(int row, int col)
{
	m_row = row;
	m_col = col;
	m_gameboard = new char*[row];

	for (int i = 0; i < row; i++)
	{
		m_gameboard[i] = new char[col];
	}

}

char Board::getBoard()
{
	return m_gameboard[m_row][m_col];
}
