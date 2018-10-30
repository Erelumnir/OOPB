#include "Student.h"
#include "Docent.h"
#include <string>
#include <iostream>

int main()
{
	char userInput;

	// Declaring Objects
	Docent docent = Docent(33, "Geert", 3000);
	Student student = Student(21, "Floris", 60);

	// Print docent leeftijd en naam en Salaris
	std::cout << "Leeftijd: " << docent.getAge() << std::endl;
	std::cout << "Naam: " << docent.getName() << std::endl;
	std::cout << "Salaris: " << docent.getSalary() << std::endl;

	// Simple white line
	std::cout << std::endl;

	// Print student leeftijd en naam en EC-punten
	std::cout << "Leeftijd: " << student.getAge() << std::endl;
	std::cout << "Naam: " << student.getName() << std::endl;
	std::cout << "Benodigde EC punten: " << student.getEC() << std::endl;

	// Simple white line
	std::cout << std::endl;

	std::cout << "Please Press something to test the program. . . " << std::endl;
	std::cin >> userInput;
    return 0;
}

