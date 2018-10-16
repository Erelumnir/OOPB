#include "Persoon.h"
#include <string>

// Constructor
Persoon::Persoon()
{
}

Persoon::Persoon(int l, std::string n) 
{
	leeftijd = l;
	naam = n;
}

// Deconstructor
Persoon::~Persoon(void)
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