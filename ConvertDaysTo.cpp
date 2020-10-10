////
// Name: Tanner Dryden
// Class: CS&131 - 2830
// Section: A
// Program 1: Convert Number of Days to Years, Months, Weeks, and Days
//
// Description: This program takes an input of how many days the user would like to convert
//				into the proper amount of years/months/weeks/days and prints the information to the console.
//				This program utilizes for loops and subtracts the inputed number. A counter for years/months/weeks/days 
//				is kept for subtractions until the the input number goes to zero. 
//
//				Additional goodies in this program:
//				The use of setw to create a nicer looking interface and cinfail for error input prevention.
//				If a bad input is entered the user is promted to enter a valid input. A detriment to using 
//				cinfail is that if the input is more than 10 digits the program asks for a valid input.
//				I was unsure of a workaround for removing the capacity of digits for cinfail.
////

#include <iostream>
#include <cstdlib>
#include <iomanip> // using setw to create a centered header

using namespace std;

int main()
{
	int inputNum = 0, temp = 1, year = 0, month = 0, week = 0, day = 0; // initializing all variables
	bool testInput; 

	cout << endl << setw(47) << "My Name is Tanner" << endl << endl;
	cout << setw(74) << "Program 1: Convert Number of Days to Years, Months, Weeks, and Days" << endl;

	for ( int i = 0; i <= 40; i++ ) // for loop that creates a line to separate the header and the program output in the console.
	{ 
		cout << "- ";
	}
	cout << endl;

	for(;;) // for loop that runs the program over again if a bad input was entered
	{ 
		temp = 1; // temporary variable set to green light the conversion process
		cout << "Please enter the number of days you would like to convert: ";
		cin >> inputNum; // requesting the user to input a number of days to convert
		testInput = cin.fail(); // set test input to false if input is invalid
		cout << endl;

		

		if (inputNum < 0 || testInput == true )
		{
			temp = 0; // sets temp value to red light the conversion process and skip it
			cout << "Your entry was not valid. Please try again." << endl << endl;
			cin.clear(); // reset the false flag for the test input
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clears the bad input
		}


		if (temp == 1) // the conversion process
		{
			cout << "The number of day(s) that is being converted are: " << inputNum << " day(s)" << endl << endl;

			for (inputNum; inputNum >= 365; year++) // add years if necessary
			{
				inputNum -= 365;
			}

			for (inputNum; inputNum >= 30; month++) // adds months if necessary
			{
				inputNum -= 30;
			}

			for (inputNum; inputNum >= 7; week++) // adds weeks if necessary
			{
				inputNum -= 7;
			}

			for (inputNum; inputNum >= 1; day++) // adds days if necessary
			{
				inputNum -= 1;
			}

			cout << "The conversion is: " << endl; // giving the user back all of the information for the conversion
			cout << "Year(s): " << year << endl;
			cout << "Month(s): " << month << endl;
			cout << "Week(s): " << week << endl;
			cout << "Day(s): " << day << endl << endl;
			cout << "Thank you for using my day converter!" << endl;
			return 0;
		}
		

	
	}
}
