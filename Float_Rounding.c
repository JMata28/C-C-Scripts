/*Author: José Mata (JMata28)*/
/*The following script asks the user for input of a decimal number and then rounds this number*/
/*to the tenth, hunderth, and thousandth decimal places. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);
main()
{
	float number;
	float w, x, y, z;
	printf("Please enter a floating point number:\n");
	scanf("%f", &number);
	printf("Original number: %f\n", number);
	w = roundToInteger(number);
	x = roundToTenths(number);
	y = roundToHundreths(number);
	z = roundToThousandths(number);
	printf("Value to the nearest integer: %.0f\n", w);
	printf("Value to the nearest tenth: %.1f\n", x);
	printf("Value to the nearest hundreth: %.2f\n", y);
	printf("Value to the nearest thousandth: %.3f\n", z);
	getchar();
	getchar();
	return 0;
}
float roundToInteger(float x)
{
	float a;
	a = floor(x * 1 + .5) / 1;
	return a;
}
float roundToTenths(float x)
{
	float b;
	b = floor(x * 10 + .5) / 10;
	return b;
}
float roundToHundreths(float x)
{
	float c;
	c = floor(x * 100 + .5) / 100;
	return c;
}
float roundToThousandths(float x)
{
	float d;
	d = floor(x * 1000 + .5) / 1000;
	return d;
}

