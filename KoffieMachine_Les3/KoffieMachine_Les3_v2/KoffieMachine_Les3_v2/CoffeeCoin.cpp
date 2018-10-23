#include "CoffeeCoin.h"
#include "Coin.h"

// Constructor
CoffeeCoin::CoffeeCoin(std::string name, float value, bool) : Coin(name, value)
{
	this->canBuyAll = canBuyAll;
}

// Deconstructor
CoffeeCoin::~CoffeeCoin()
{
}