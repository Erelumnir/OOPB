#include "CoffeeCoin.h"
#include "Euro.h"

// Constructor
CoffeeCoin::CoffeeCoin(std::string name, int value, bool ) : Euro(name, value)
{
	this->canBuyAll = canBuyAll;
}

// Deconstructor
CoffeeCoin::~CoffeeCoin()
{
}