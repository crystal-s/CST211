/*
Crystal Stevens
Fall 2015
Data Structures
*/

#pragma once
#include <iostream>



class Exception
{
	friend std::ostream & operator<< (std::ostream & stream, const Exception & except);

public:
	Exception();
	~Exception();
	Exception(char *msg);
	Exception(const Exception & copy);
	Exception & operator =(const Exception &rhs);
	const char * getMessage();
	void setMessage(char * msg);

protected:

	char * m_msg;
};


