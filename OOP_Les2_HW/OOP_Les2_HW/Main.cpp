#include "Student.h"
#include "Docent.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// Declaring Objects
	//Docent docent = Docent(33, "Geert");
	Student student = Student(21, "Leslie");

	// Print docent leeftijd en naam
	//docent.getAge();
	//cout << endl;
	//docent.getName();
	//cout << endl;

	// Print student leeftijd en naam
	student.getAge();
	cout << endl;
	student.getName();
	cout << endl;

    return 0;
}

