/*
Crystal Stevens
Fall 2015
Data Structures 
*/

//#include <iosteam>
#include "Array.h"
#include "Exception.h"

using namespace std;

void main()
{
	Array<int> a(10, 0);
	
	// int array with length 6, default starting index of 0
	Array<int> b(6);

	// character array with length 7, starting index -2
	Array<char> c (7, -2); 

	Array<int> d;

	std::cout << "for A the starting index is: " << a.getStartIndex() 
		<< " and the length is: " << a.getLength() << endl;

	std::cout << "for B the starting index is: " << b.getStartIndex()
		<< " and the length is: " << b.getLength() << endl << endl;

	/* Testing the getters and setters */

	std::cout << "Changing Starting index and length for A" << endl;
	a.setStartIndex(1);
	a.setLength(3);
	std::cout << "For A the starting index is: " << a.getStartIndex()
			<< " and the length is: " << a.getLength() << endl << endl;


	/* Filling in an array */
	a[1] = 5;
	a[2] = 3;

	std:: cout << a[1] << " " << a[2];

	/* Testing copy constructor */
	 b = a;

	std::cout << "Setting B = A... " << endl;
	 std::cout << "For B the starting index is: " << b.getStartIndex()
		 << " and the length is: " << b.getLength() << endl;

	 /* Testing operator = */
	
	d = a;
	 std::cout << "Setting D = A... " << endl;
	 std::cout << "For D the starting index is: " << d.getStartIndex()
		 << " and the length is: " << d.getLength() << endl;
}

