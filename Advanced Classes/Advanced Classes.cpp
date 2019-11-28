// Fig. 22.20: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
using std::cout;

#include "Complex.h" // Complex class definition

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
	: real(realPart),
	imaginary(imaginaryPart)
{
	// empty body
} // end Complex constructor

  // addition operator
Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,
		imaginary + operand2.imaginary);
} // end function operator+

  // subtraction operator
Complex Complex::operator-(const Complex &operand2) const
{
	return Complex(real - operand2.real,
		imaginary - operand2.imaginary);
} // end function operator-

 //Multiplication operator 
Complex Complex::operator*(const Complex &operand2) const
{
	return Complex(real * operand2.real,
		imaginary * operand2.imaginary);
} // end function operator*

 // Equals operator
bool Complex::operator==(const Complex &operand2) const
{
	bool answer;
	if (real == operand2.real && imaginary == operand2.imaginary)
		return true;
	else
		return false;
} // end function operator*

 //Does not equal operator
bool Complex::operator!=(const Complex &operand2) const
{
	if (real != operand2.real || imaginary != operand2.imaginary)
		return true;
	else
		return false; 
} // end function operator*
ostream &operator<<(ostream &output, const Complex &number)
{
	output << "(" << number.real  << ", " << number.imaginary << ")";     //Print the real and imaginary values of the object "number" sent. 
	return output;
}
Complex::Complex(const Complex& Object2){ //Send second object. 
	 real = Object2.real;   //Assign value of first object's real to second object's real.
	 imaginary = Object2.imaginary;    //Assign value of first object's imaginary to second object's imaginary.
	 cout << Object2.real << " " << Object2.imaginary << "\n";  //Print the object. 
}