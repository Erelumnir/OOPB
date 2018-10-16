#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon
{

public:
	Docent(int l, std::string n);
	~Docent();

private:
	int leeftijd;
	std::string naam;
};