#include <iostream>
#include <math.h>
using namespace std;
double hypotenuse(double x, double y);
int main()
{
	double a = hypotenuse (3, 4); //calculate the hypotenuse of the first triangle and assign to a//
	double b = hypotenuse (5, 12); //calculate the hypotenuse of the second triangle and assign to b//
	double c = hypotenuse (8, 15); //calculate the hypotenuse of the third triangle and assign to c//

	cout << "The hypotenuse of the first triangle is: " << a << "\n"; //Print result a//
	cout << "The hypotenuse of the second triangle is: " << b << "\n"; //Print result b//
	cout << "The hypotenuse of the third triangle is: " << c << "\n"; //Print result c//
	getchar();
	getchar();
	return 0;
}
double hypotenuse(double x, double y)
{
	double result = sqrt(x*x + y*y); //perform the calculation//
	return result;
}