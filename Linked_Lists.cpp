//Author: José Mata (JMata28)
//The following C++ script takes a single word as input from the user and outputs the letters of that word in alphabetical order.
//Linked lists are used to achieve this purpose

#include <iostream>
#include <string>
#include <list>
using namespace std;
int main() {

	//Ask user for word and put it in a string.
	string word; 
	cout << "Please enter a word\n";   
	cin >> word;          

	//Use efficient bubble sort to get the word in alphabetical order.
	int s = word.size();
	for (int x = 0; x<s; x++)                  //Go through the entire array a number of times s. 
	{
		int efficient = 0;                     //In each run through the array, make an int named "efficient" to be zero.
		for (int y = 0; y < s - (x + 1); y++)          //Compare each item in the array with one comparison per run.
		{
			if (word[y]>word[y + 1])      //If the first of the two letters is not first in alphabetical order, swap them.  
			{
				int temp = word[y + 1];
				word[y + 1] = word[y];
				word[y] = temp;
				efficient = 1;                 //If there is a swap, "efficient" will be set to one.
			}
		}
		if (efficient == 0)   //Check if "efficient" is 0 (if there isn't a swap), and if it is, exit the loop. 
			break;
	}
	list<char> list1;    // Create List
	list<char>::iterator j;
	for (int i = 0; i <= s; ++i) {                          
		list1.push_back(word[i]);            //Push the letters in alphabetical order to the list. 
	}
	for (j = list1.begin(); j != list1.end(); ++j) {
		cout << *j << " ";                   //Display the letters of the list from beginning to end.
	}
	getchar();
	getchar();
	return 0;
}
