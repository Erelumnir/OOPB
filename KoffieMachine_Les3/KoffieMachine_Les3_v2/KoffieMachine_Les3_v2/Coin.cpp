#include "Coin.h"

// Constructor
Coin::Coin(std::string name, float value)
{
	this->name = name;
	this->value = value;
}

// Deconstructor
Coin::~Coin()
{
}

std::string Coin::GetName()
{
	return name;
}

float Coin::GetValue()
{
	return value;
}