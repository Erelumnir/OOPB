#pragma once
#include <string>

class Persoon
{
public:
	Persoon(int leeftijd, std::string naam);
    int getAge();
	std::string getName();
	~Persoon();

private:
	// Persoon heeft beide een leeftijd en een Naam
	int leeftijd;
	std::string naam;
};