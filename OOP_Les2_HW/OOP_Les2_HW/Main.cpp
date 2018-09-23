#include "Student.h"
#include "Docent.h"
#include <string>
#include <iostream>

int main()
{
	char userInput;

	// Declaring Objects
	Docent docent = Docent(33, "Geert");
	Student student = Student(21, "Floris");

	// Print docent leeftijd en naam
	std::cout << docent.getAge() << std::endl;
	std::cout << docent.getName() << std::endl;

	// Print student leeftijd en naam
	std::cout << student.getAge() << std::endl;
	std::cout << student.getName() << std::endl;

	std::cout << "Please Press something to test the program. . . " << std::endl;
	std::cin >> userInput;
    return 0;
}

