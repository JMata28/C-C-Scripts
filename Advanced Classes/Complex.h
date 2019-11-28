
#pragma once
#include <ostream>
// Fig. 22.19: Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
class Complex
{
public:
	Complex(const Complex& Object2); //Copy constructor
	Complex(double = 0.0, double = 0.0); // constructor
	Complex operator+(const Complex & object1) const; // addition
	Complex operator-(const Complex &) const; // subtraction
	Complex operator*(const Complex &) const; // multiplication
	friend ostream &operator<<(ostream &, const Complex &number); //cout
	bool operator==(const Complex &) const;//equals
	bool operator!=(const Complex &) const;//does not equal
private:
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex

#endif