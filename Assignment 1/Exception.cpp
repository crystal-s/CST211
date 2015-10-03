/*
Crystal Stevens
Fall 2015
Data Structures
*/

#include "Exception.h"
using std::cout;
using std::endl;

std::ostream & operator<< (std::ostream & stream, const Exception & except);


Exception::Exception()
{
	cout << "Error: out of bounds";
}


Exception::~Exception()
{
	//delete [] m_msg;
}

Exception::Exception(char *msg)
{
	m_msg = new char[strlen(msg) + 1];
	m_msg = msg;
}

Exception::Exception(const Exception & copy)
{
	m_msg = new char[strlen(copy.m_msg) + 1];
	m_msg = copy.m_msg;

}

Exception & Exception::operator =(const Exception &rhs)
{
	m_msg = new char[strlen(rhs.m_msg) + 1];
	m_msg = rhs.m_msg;

	return *this;
}

const char * Exception::getMessage()
{
	return m_msg;
}

void Exception::setMessage(char * msg)
{	
	m_msg = msg;
}

std::ostream & operator<< (std::ostream & stream, const Exception & except)
{
	cout << except.m_msg;
	return stream;
}