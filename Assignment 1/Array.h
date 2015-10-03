/*Crystal Stevens
Fall 2015
Data Structures*/

#pragma once

#include <iostream>
#include "Exception.h"
template <typename T>
class Array
{
public:
	Array();
	~Array();
	Array(int length, int start_index = 0);
	Array(const Array & copy);

	int getStartIndex();
	int getLength();
	void setStartIndex(int start_index);
	void setLength(int length);
	T & operator [ ](int index);
	Array & operator =(const Array & rhs);

protected: 

	T* m_array;
	int m_length;
	int m_start_index;

};

/*
 * Default array has a starting index of 0 and can hold 10 elements
 */

template <typename T>
Array<T>::Array()   
{
	m_array = nullptr;

	m_start_index = 0;
	m_length = 0;

}

template <typename T>
Array<T>::~Array()
{
	delete [] m_array;
}

/*
* Allows the user to choose the length and starting index
* of the array they would like to create
*/
template <typename T>
Array<T>::Array(int length, int start_index = 0)
{
	m_array = new T[length];

	m_start_index = start_index;
	m_length = length;

}

/*
* Creates a copy of an array object 
*/
template <typename T>
Array<T>::Array(const Array & copy)
{
	delete[] m_array;
	m_array = new T[copy.m_length];
	m_length = copy.m_length;
	m_start_index = copy.m_start_index;

	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = copy.m_array[i];
	}
}

/*
* Prints out the starting index of an array
*/

template <typename T>
int Array<T>::getStartIndex()
{
	//std::cout << "The starting index is " << m_start_index << endl;
	return m_start_index;
}

/*
* Prints out the length of an array
*/
template <typename T>
int Array<T>::getLength()
{
	//std::cout << "The length is " << m_length << endl;
	return m_length;
}

/*
* Allows the user to change the starting index of an existing array
*/
template <typename T>
void Array<T>::setStartIndex(int start_index)
{
	m_start_index = start_index;
}


/*
* Allows the user to change the length of an existing array
*/
template <typename T>
void Array<T>::setLength(int length)
{
	m_length = length;
}

/*
* Set one array equal to another array
*/
template <typename T>
Array<T> & Array<T>:: operator =(const Array & rhs)
{
	delete[] m_array;
	m_array = new T[rhs.m_length];
	m_length = rhs.m_length;
	m_start_index = rhs.m_start_index;

	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = rhs.m_array[i];
	}

	std::cout << "Using operator =";

	return *this;
}


/*
* Put a value into an array at a particular location
*/
template <typename T>
T & Array<T>::operator [ ](int index)
{

	if (m_start_index < index, index >(m_start_index + m_length - 1))
	{
		return m_array[index];
	}

	else
	{
		//try
			throw Exception("Out of Bounds");
	
	}
}