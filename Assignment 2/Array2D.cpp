/*
Crystal Stevens
Fall 2015
Data Structures
Assignment 2
*/
#include "Exception.h"
#include "Array2D.h"
#include <iostream>
using std::cout;
using std::endl;


/***********************************************
Creates a default constructed array

************************************************/
template <typename T> 
Array2D<T>::Array2D()
{
	m_array = nullptr;
	m_row = 0;
	m_col = 0;
}

/***********************************************
Creates an array constructed with the row and column 
passed in as parameters

************************************************/

template <typename T>
Array2D<T>::Array2D(int row, int col)
{
	m_array = new T*[row];

	for (int i = 0; i < row; i++)
	{
		m_array[i] = new T[col];

	}


	m_row = row;
	m_col = col;

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = 1;
		}
	}

	
}

/***********************************************
Default Destructor

************************************************/
template <typename T>
Array2D <T>::~Array2D()
{
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_array[i];
	}

	delete[] m_array;
}

/***********************************************
Creates a copy of an array passed in as a parameter

************************************************/

template <typename T>
Array2D<T>::Array2D(const Array2D & copy)
{
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_array[i];
	}

	delete[] m_array;

	
	m_array = new T*[copy.m_row];

	for (int i = 0; i < copy.m_row; i++)
	{
		m_array[i] = new T[copy.m_col];

	}
	m_row = copy.m_row;
	m_col = copy.m_col;

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = copy.m_array[i][j];
		}
	}
}


/***********************************************
Makes one array equal to another

************************************************/
template <typename T>
Array2D<T> & Array2D<T>::operator=(const Array2D<T> & another)
{
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_array[i];
	}

	delete[] m_array;


	m_array = new T*[another.m_row];

	for (int i = 0; i < another.m_row; i++)
	{
		m_array[i] = new T[another.m_col];

	}

	m_row = another.m_row;
	m_col = another.m_col;

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = another.m_array[i][j];
		}
	}

	return *this;
}


/***********************************************
Overloaded subscript operator, uses Row.cpp to locate the index 
when passed a row is passed in as a parameter

************************************************/
template <typename T>
Row<T> Array2D<T>::operator[](int index)
{

	if (index < 0 || index > m_row)
	{
		if (index < 0)
		{
			throw Exception("Index can not be less than.");
		}

		else
		{
			throw Exception("Index exceeds column bounds");
		}
	}

	else 
	return Row<T>(*this, index);

}

/***********************************************
Returns the row member variable

************************************************/
template <typename T>
int Array2D<T>::getRow()
{
	return m_row;
}

/***********************************************
Changes an array's row count and resizes the array accordingly

************************************************/
template <typename T>
void Array2D<T>::setRow(int rows)
{
	T ** Temp = m_array;

	m_array = new T*[rows];

	for (int i = 0; i < rows; i++)
	{
		m_array[i] = new T[m_col];

	}

	if (rows > m_row) // larger
	{
		for (int i = 0; i < m_row; i++)
		{
			for (int j = 0; j < m_col; j++)
			{
				m_array[i][j] = Temp[i][j];
			}
		}
	}

	else // smaller
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < m_col; j++)
			{
				m_array[i][j] = Temp[i][j];
			}
		}

	}


	for (int i = 0; i < m_row; i++)
	{
		delete[] Temp[i];
	}

	delete[] Temp;

	m_row = rows;

}


/***********************************************
returns the column member variable

************************************************/
template <typename T>
int Array2D<T>::getColumn()
{
	return m_col;
}

/***********************************************
Changes an array's column count and resizes the array accordingly

************************************************/
template <typename T>
void Array2D<T>::setColumn(int column)
{
	T ** Temp = m_array;

	m_array = new T*[column];

	for (int i = 0; i < column; i++)
	{
		m_array[i] = new T[m_row];

	}

	if (column > m_col) // larger
	{
		for (int i = 0; i < m_row; i++)
		{
			for (int j = 0; j < m_col; j++)
			{
				m_array[i][j] = Temp[i][j];
			}
		}
	}

	else // smaller
	{
		for (int i = 0; i < m_row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				m_array[i][j] = Temp[i][j];
			}
		}
	}


	for (int i = 0; i < m_col; i++)
	{
		delete[] Temp[i];
	}

	delete[] Temp;

	m_col = column;

}

/***********************************************
returns an item in a given cell when a row
and column are passed in as parameters

************************************************/

template <typename T>
T & Array2D<T>::Select(int row, int column)
{
	return m_array[row][column];
}


/***********************************************
Displays the array visually

************************************************/
template <typename T>
void Array2D<T>::display()
{
	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			cout << m_array[i][j] << " ";
		}

		cout << endl;
	}
}