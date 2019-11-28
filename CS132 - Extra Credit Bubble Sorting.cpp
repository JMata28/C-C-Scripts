#include <iostream>
using namespace std;
int main() {
	//This program gets an array of numbers and uses bubble sorting more efficiently to list them from least to greatest.
	int numbers[]{ 5, 8, 4, 21, 17, 16, 19 };  //Create an array with seven set values.
	for (int x = 0; x<7; x++)                  //Go through the entire array seven times, since it has seven elements. 
	{
		int efficient = 0;                     //In each run through the array, make an int named "efficient" to be zero.
		for (int y = 0; y < 7 - (x+1) ; y++)          //Compare each item in the array 
			//The 7 - (x+1) makes it more efficient becaause it will not check the last number(s) after each run, because once it goes
			//through the array, the last number will be the greatest.
		{
			if (numbers[y]>numbers[y + 1])      //If the first of the two numbers compared is greater, swap them.  
			{
				int temp = numbers[y + 1];
				numbers[y + 1] = numbers[y];
				numbers[y] = temp;
				efficient = 1;                 //If there is a swap, "efficient" will be set to one.
			}
		}
		if (efficient == 0)   //Check if "efficient" is 0, and if it is, exit the loop. 
			break;
		//If there isn't a swap, that means that the array will already be sorted from least to greatest and that "efficient" is still 0.
		//So, if "efficient" is 0, exit the loop. This makes the program more efficient because no more runs than necessary will be made.
	}
	for (int x = 0; x < 7; x++) {                //Display the entire array. 
		cout << numbers[x] << " ";
	}
	getchar();
	getchar();
	return 0;
}