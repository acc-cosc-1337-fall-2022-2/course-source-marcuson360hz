//write include statements
#include <iostream>
#include <string>
#include "dna.h"
//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() {

	bool userExit = false;

	do {
        int menuSelection;

        cout << "Welcome to the Factorial & GCD Machine! Below are the menu options." << "\n\n";
		cout << "1 - Factorial" << "\n";
		cout << "2 - Greatest Common Divisor" << "\n";
		cout << "3 - Exit Program" << "\n\n";

		cout << "Select your menu option: ";
        cin >> menuSelection;

		switch (menuSelection)
    {
        case 1: {

			int factorialNumber;

			cout << "\n\nYou chose Factorials. Please enter a number: ";
			cin >> factorialNumber;

			int factorialMath = factorial(factorialNumber);
			cout << "\nThe Factorial of " << factorialNumber << " is:" << factorialMath << "\n"; 

            break;
		}
            

        case 2: {

			int firstNumber;
			int secondNumber;

			cout << "\n\nYou chose Factorials. Please your first number: ";
			cin >> firstNumber;

			cout << "\nPlease your second number: ";
			cin >> secondNumber;

			int gcdMath = gcd(firstNumber, secondNumber);
			cout << "\nThe gcd of" << firstNumber << " and " << secondNumber << " is:" << gcdMath << "\n"; 
			
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
			
    }
    }
    while (userExit != true);

	return 0;
}