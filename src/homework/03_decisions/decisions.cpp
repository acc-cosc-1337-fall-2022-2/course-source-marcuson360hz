//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
std::string get_letter_grade_using_if(int grade){

    std::string letterGrade;

    if (grade >= 90 && grade <= 100){

        letterGrade = "A";
    }
    else if (grade >= 80 && grade <= 89){

        letterGrade = "B";
    }
    else if (grade >= 70 && grade <= 79){

        letterGrade = "C";
    }
    else if (grade >= 60 && grade <= 69){

        letterGrade = "D";
    }
    else if (grade >= 00 && grade <= 59){

        letterGrade = "F";
    }
    else{

        letterGrade = "Number is out of range.";
    }

    return letterGrade;
}

std::string get_letter_grade_using_switch(int grade){

    std::string letterGradeSwitch;

    switch (grade)
    {
        case 90 ... 100:
            letterGradeSwitch = "A";
            break;

        case 80 ... 89:
            letterGradeSwitch = "B";
            break;

        case 70 ... 79:
            letterGradeSwitch = "C";
            break;

        case 60 ... 69:
            letterGradeSwitch = "D";
            break;

        case 0 ... 59:
            letterGradeSwitch = "F";
            break;

        default:
            letterGradeSwitch = "Number is out of range.";
    }

    return letterGradeSwitch;
}