#include "Euro.h"

// Constructor
Euro::Euro(std::string name, int value)
{
	this->name = name;
	this->value = value;
}

// Deconstructor
Euro::~Euro()
{
}

std::string Euro::GetName()
{
	return name;
}

int Euro::GetValue()
{
	return value;
}