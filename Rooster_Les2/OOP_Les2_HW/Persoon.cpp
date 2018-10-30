#include "Persoon.h"
#include <string>

// Constructor
Persoon::Persoon(int leeftijd, std::string naam) 
{
	this->leeftijd = leeftijd;
	this->naam = naam;
}

Persoon::~Persoon()
{
}

int Persoon::getAge()
{
	return leeftijd;
}

std::string Persoon::getName() 
{
	return naam;
}