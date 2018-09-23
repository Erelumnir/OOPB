#pragma once
#include <string>

class Persoon
{
public:
	Persoon();
	Persoon(int l, std::string n);
	virtual int getAge();
	virtual std::string getName();
	~Persoon();

	int leeftijd;
	std::string naam;
};