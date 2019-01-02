#pragma once
#include <string>

class Docent
{
public:
	Docent();
	std::string getName();	//Return naam
	int getHours();			//Return Uren

private:
	std::string naam;
	int werkUren;
};

