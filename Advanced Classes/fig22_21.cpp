// Fig. 22.21: fig22_21.cpp
// Complex class test program.
#include <iostream>
using std::cout;
using std::endl;

#include "Complex.h"

int main()
{
	//Create objects of the class Complex.
	Complex x;
	Complex y(4.3, 8.2);
	Complex z(3.3, 1.1);

	//Print original values.
	cout << "x: ";
	cout << x;
	cout << "\ny: ";
	cout << y;
	cout << "\nz: ";
	cout << z;

	//Add y plus z and set the result to c.
	x = y + z;
	cout << "\n\nx = y + z:" << endl;
	cout << x;
	cout << " = ";
	cout << y;
	cout << " + ";
	cout << z;

	//Subtract y minus z and set the result to c.
	x = y - z;
	cout << "\n\nx = y - z:" << endl;
	cout << x;
	cout << " = ";
	cout << y;
	cout << " - ";
	cout << z;
	cout << endl;

	//Multiply y and z and set the result to c.
	x = y * z;
	cout << "\n\nx = y * z:" << endl;
	cout << x;
	cout << " = ";
	cout << y;
	cout << " * ";
	cout << z;
	cout << endl;

	//Compare y and z using ==.
	cout << "\nCompare if y and z are equal.\n";
	x= y == z;
	if (x == true) {
		cout << y << "=" << z;
	}
	if (x == false) {
		cout << "They are not equal.\n";
	}

	//Compare y and z using !=.
	cout << "\nCompare if y and z are not equal.\n";
	x = y != z;
	if (x == true) {
		cout << y << "!=" << z;
	}
	if (x == false) {
		cout << "They are equal.\n\n";
	}

	//create copy constructor
	cout << "\n\nThis is a copy constructor.\n";
	Complex object1(2,5);
	Complex object2 = object1;
	Complex object3(object2);
	getchar();
	getchar();
	return 0;
} // end main
