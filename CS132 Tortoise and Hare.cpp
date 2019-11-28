#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib> 
#include <iomanip>
#define LIMIT 70 //Set the limit of steps in the race so it doesn't change
using namespace std;
void TortoiseMove(int *x);
void HareMove(int *y);   //Define all three functions. 
void PrintLine(int *x, int *y);
int main()
{
	cout << "You are watching the race between the Tortoise and the Hare!\n BANG !!!\n AND THEY'RE OFF!!!\n"; //Initial text 
	int x = 1;   //Variable for tortoise
	int y = 1;   //Variable for Hare
	srand(time(NULL));
	while (x < LIMIT && y < LIMIT)    //Call all three functions until either the tortoise or the hare reaches the limit
	{
		TortoiseMove(&x);
		HareMove(&y);
		PrintLine(&x, &y);
	}
	if (x > y)
		cout << "TORTOISE WINS!!! YAY!!!\n";              //Text if tortoise wins
	if (y > x)
		cout << "Hare wins. Yuch.\n";                    //Text if hare wins
	if (x == y)
		cout << "It is a tie!\n";                          // Text if they tie
	getchar();
	getchar();
	return 0;
}
void TortoiseMove(int *x)
{
	int randnumber = rand() % 11;
	if (1 <= randnumber && randnumber <= 5)         //Generate 50% chance
		*x = *x + 3;                               //Add three steps
	if (6 <= randnumber && randnumber <= 7)                //Generate 20% chance
		*x = *x - 6;                                            //Remove six steps
	if (8 <= randnumber && randnumber <= 10)                //Generate 30% chance
		*x = *x + 1;                                   //Add a step
	if (*x < 1)                                       //Check that the tortoise is not behind the starting position
		*x = 1;
}
void HareMove(int *y)
{
	int randnumber = rand() % 11;
	if (1 <= randnumber && randnumber <= 2)         //Generate 20% chance
		*y = *y;                                   //Keep the same distance
	if (3 <= randnumber && randnumber <= 4)        //Generate 20% chance
		*y = *y + 9;                                //Add nine steps 
	if (randnumber == 5)                        //Generate 10% chance 
		*y = *y - 12;                             //Subtract twelve steps 
	if (6 <= randnumber && randnumber <= 8)     //Generate 20% chance	
		*y = *y + 1;                                //Add a step 
	if (9 <= randnumber && randnumber <= 10)       //Generate a 20% chance
		*y = *y - 2;                                //Subtract two steps 
	if (*y < 1)                                     //Check that the Hare is not behind starting position
		*y = 1;
}
void PrintLine(int *x, int *y)
{
	if (*x > *y)
		cout << setw(*y) << "H" << setw(*x - *y) << "T\n";
	if (*y < *x)															//Print results
		cout << setw(*x) << "T" << setw(*y - *x) << "H\n";
	if (*x == *y)
		cout << "Ouch!\n";
}