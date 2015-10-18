/*
Crystal Stevens
Lab 1
CST 211
*/

#include "Cell.h"


Cell::Cell()
{

}


Cell::~Cell()
{

}

char Cell::getCovered()
{
	return m_covered;
}
char Cell::getNumbered() // should have a loop that looks at touching cells and counts how many have mines in them
{
	return  m_numbered;
}

char Cell::getBlank()
{
	return m_blank;
}

char Cell::getMarked()
{
	return m_marked;
}

char Cell::getMine()
{
	return m_mine;
}

//char Cell::getCell()
//{
//	
//}