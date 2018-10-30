#include "Student.h"
#include "Persoon.h"
#include <string>

Student::Student(int leeftijd, std::string naam, int ec) : Persoon::Persoon(leeftijd, naam)
{
	this->ec = ec;
}

Student::~Student()
{
}

int Student::getEC()
{
	return ec;
}
