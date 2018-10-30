#include "Docent.h"
#include <string>

Docent::Docent(int leeftijd, std::string naam, float salary) : Persoon(leeftijd, naam)
{
	this->salary = salary;
}

Docent::~Docent()
{
}

float Docent::getSalary()
{
	return salary;
}