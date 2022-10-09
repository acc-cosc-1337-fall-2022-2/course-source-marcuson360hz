#include <iostream>
#include <string>
#include "func.h"

using std::cout;
using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{

	bool userExit = false;

	do {
        int menuSelection;

        cout << "Welcome to the DNA Machine! Below are the menu options." << "\n\n";
		cout << "1 - Get GC Content" << "\n";
		cout << "2 - Get DNA Complement" << "\n";
		cout << "3 - Exit Program" << "\n\n";

		cout << "Select your menu option: ";
        cin >> menuSelection;

		switch (menuSelection)
    {
        case 1: {

			std::string contentInput;

			cout << "\n\nYou chose GC Content. Please enter a DNA sequence: ";
			cin >> contentInput;

			cout << "\nThe GC content results are: " << get_gc_content(contentInput) << "\n"; 

            break;
		}
            

        case 2: {

			std::string dnaInput;

			cout << "\n\nYou chose DNA complement. Please enter a DNA sequence: ";
			cin >> dnaInput;

			cout << "\nThe DNA complement results are: " << get_dna_complement(dnaInput) << "\n"; 
			
            break;
		}
            

        case 3: {

			char exitConfirmation;

			cout << "Are you sure you want to exit? (Y = Yes | N = No)\n" << "Enter your selection: ";
			cin >> exitConfirmation;

			if (exitConfirmation == 'y' || exitConfirmation == 'Y'){

				userExit = true;
			} 
            else{

				userExit = false;
			}
            break;
		}
		// HW 5 didn't ask for reverse string
    }
    }
    while (userExit != true);

	return 0;
}