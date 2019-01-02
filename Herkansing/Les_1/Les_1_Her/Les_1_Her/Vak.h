#pragma once
#include <string>

class Vak
{
public:
	Vak();
	int getVakEC();				//Return vakEC
	std::string getOnderwerp();	//Return onderwerp

private:
	std::string onderwerp;		//Naam van t vak
	int vakEC;					//aantal ec voor t vak
};

