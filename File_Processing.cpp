//Author: José Mata (JMata28)
//The following C++ script allows the user to create, modify, and read a text document with the stats of
//strength, health, and hitchance for a monster character

#include <iostream>
#include <stdlib.h>
#include <stdio.h>   //Set headers
#include <fstream>
using namespace std;
struct stats {                 //Make structure and define their variables 
	int strength;
	int health;
	int hitchance;
} Monster;    //Make Monster one of the objects of the structure. 
int main()
{
	int answer;
	cout << "Enter 1 if you want to write or 2 if you want to read the stats of the monster.\n";   //Ask for writing or reading.
	cin >> answer;
	if (answer == 1)
	{
		ofstream file1("statistics.txt", ios::out);  //Open for writing.
		cout << "Enter the monster's strength, then the monster's health, and then the monster's hit chance.\n"; 
		cin >> Monster.strength;
		cin >> Monster.health;            //Give the structure variables the input values. 
		cin >> Monster.hitchance; 
		file1 << Monster.strength << " " << Monster.health << " " << Monster.hitchance;    //Put the structure values inside the file. 
		file1.close();    //Close file. 
	}
	else 
		if (answer == 2)
	{
		ifstream file1("statistics.txt", ios::in);   //Open for reading 
		file1 >> Monster.strength >> Monster.health >> Monster.hitchance;   //Read the values from the file. 
		cout << "The monster's strength is: " << Monster.strength << ".\n";
		cout << "The monster's health is: " << Monster.health << ".\n";       //Print the values of the file on the screen.
		cout << "The monster's hitchance is " << Monster.hitchance << ".\n";
		file1.close();   //Close file. 
	}
	else
		cout << "Answer not valid.\n";   //If user does not enter 1 or 2, the program can't work. 
	getchar();
	getchar();
	return 0; 
}
