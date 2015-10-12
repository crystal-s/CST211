/*
Crystal Stevens
Fall 2015
Data Structures
Assignment 2
*/

#pragma once

template <typename T>
class Array2D;

template <typename T>
class Row
{
public:
	Row(Array2D<T> & array, int row);
	T & operator [](int column);


private:
	Array2D<T> & m_array2D;
	int m_row;
};

#include "Row.cpp"