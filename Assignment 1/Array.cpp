/*Crystal Stevens
Fall 2015
Data Structures*/

#include "Array.h"

template <typename T>
Array<T>::Array()
{
	T* m_array = new Array;

	m_start_index = 0;
	m_length = 10;

}

template <typename T>
Array<T>::~Array()
{
	delete* m_array[];
}

template <typename T>
Array<T>::Array(int length, int start_index = 0)
{
	T* m_array = new Array;

	m_start_index = index;
	m_length = length;

}

template <typename T>
Array<T>::Array(const Array & copy)
{
}

template <typename T>
int Array<T>::getStartIndex()
{
	std::cout << "The starting index is " << m_start_index << endl;
}

template <typename T>
int Array<T>::getLength()
{
	std::cout << "The length is " << m_length << endl;
}

template <typename T>
void Array<T>::setStartIndex(int start_index)
{
	m_start_index = start_index;
}


template <typename T>
void Array<T>::setLength(int length)
{
	m_length = length
}

template <typename T>
Array<T> & Array<T>:: operator =(const Array & rhs)
{
}

template <typename T>
T Array<T>::& operator [ ](int index)
{
}

