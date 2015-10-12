/*
Crystal Stevens
Fall 2015
Data Structures
Assignment 2
*/
#include "Exception.h"
#include "Array2D.h"
#include <iostream>

void main()
{
	Array2D<int> first;
	Array2D<int> second(2, 5);

	cout << "Creating array 'first' with default constructor, 'second' as 2x5 array" << endl;

	cout << "Filling 'second' array with '0's" << endl;

	
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			second[i][j] = 0;
		}
	}

	
	
	second.display();
	cout << endl;

	cout << "testing copy constructor to create array 'third' to be the same as 'second'" << endl;
	Array2D<int> third(second);
	//third.display();
	cout << endl;

	cout << "testing =oporator to create first array to be the same as second." << endl;
	first = second;
	first.display();
	cout << endl;
	
	
	cout << "Testing the subscript operator first[0][1] = 7"<< endl;
	first[0][1] = 7;
	first.display();
	cout << endl;

	cout << "Testing the setRow function first.setRow(4)"<< endl;
	first.setRow(4);
	first.display();
	cout << endl;

	cout << "Testing the setColumn function first.setColumn(2)" << endl;
	first.setColumn(2);
	first.display();
	cout << endl;




	/***************************
	Uncomment the following lines to view Exception testing below
	****************************/

	/*

	try
	{
		second[25][25] = 6;
	}
	catch (Exception & except)
	{
		cout << except.getMessage() << endl;
	}

	
	
	try
	{
		second[-2][25] = 6;
	}
	catch (Exception & except)
	{
		cout << except.getMessage() << endl;
	}
	
	
	
	*/
}