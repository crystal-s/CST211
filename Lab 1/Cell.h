/*
Crystal Stevens
Lab 1
CST 211
*/

#pragma once
class Cell
{
public:
	Cell();
	~Cell();
	char getCell();
	char getCovered();
	char getNumbered();
	char getBlank();
	char getMarked();
	char getMine();

private:
	/**********************************************
	Types of squares that can exist in the board
	***********************************************/

	char m_covered;
	char m_numbered;
	char m_blank;
	char m_marked;
	char m_mine;

};

