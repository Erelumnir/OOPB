#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon
{

public:
	Docent(int leeftijd, std::string naam, float salary);
	~Docent();
	float getSalary();

private:
	float salary;
};