/*
Crystal Stevens
Fall 2015
Data Structures
Assignment 2

*/
#include "Exception.h"
#include "Row.h"

/***********************************************
Constructor, takes an array object and sets the row member variable

************************************************/
template <typename T>
Row<T>::Row(Array2D<T> & array, int row) : m_array2D{ array }, m_row{ row } {}


/***********************************************
overloaded subscript operator
returns the item in a cell. 
The column is passed in as a parameter.

************************************************/
template <typename T>
T & Row<T>::operator [](int column)
{

	if (column < 0 || column > m_row)
	{
		if (column < 0)
		{
			throw Exception("Index can not be less than 0.");

		}

		/*else 
		{
			throw Exception("Index exceeds row bounds.");
		}*/
	}


	else
	{
		return	m_array2D.Select(m_row, column);
	}
	
}