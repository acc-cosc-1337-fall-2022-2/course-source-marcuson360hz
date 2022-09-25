//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	auto yourGrade = 0;
	int menuSelection;
	
	cout << "Welcome to the if/switch Grade Converter." << "\n";
	cout << "MAIN MENU:\n\n" << "Option 1 - Calculate your letter grade using if\n" << "Option 2 - Calculate your letter grade using switch\n" << "Option 3 - Exit Program" << "\n\n";
	cout << "Please select an option: ";
	cin >> menuSelection;

	if (menuSelection == 1){

		cout << "\nYou have selected (if calculation)" << "\n";
		cout << "Please enter your numerical grade: ";
		cin >> yourGrade;

		if (yourGrade >= 0 && yourGrade <= 100){

			auto letterGradeIf = get_letter_grade_using_if(yourGrade);

			cout << "Your letter grade is: " << letterGradeIf << "using the (if) calculation." << "\n\n";
			cout << "Thank you for using the Grade Converter program. Goodbye!" << std::endl;
		}
		else{

			cout << "The number is out of range." << "Terminating program." << std::endl;
		}
	}
	else if (menuSelection == 2){

		cout << "\nYou have selected (switch calculation)" << "\n";
		cout << "Please enter your numerical grade: ";
		cin >> yourGrade;

		if (yourGrade >= 0 && yourGrade <= 100){

			auto letterGradeSwitch = get_letter_grade_using_switch(yourGrade);

			cout << "Your letter grade is: " << letterGradeSwitch << "using the (switch) calculation." << "\n\n";
			cout << "Thank you for using the Grade Converter program. Goodbye!" << std::endl;
		}
		else{

			cout << "The number is out of range." << "Terminating program." << std::endl;
		}
	}
	else{

		cout << "\nThank you for using the Grade Converter program. Goodbye!" << std::endl;
	}

	return 0;
}