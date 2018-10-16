#pragma once

#include "Coin.h"
#include <string>

class CoffeeCoin : public Coin
{
public:
	CoffeeCoin(std::string name, float value, bool canBuyAll);
	~CoffeeCoin();

private:
	bool canBuyAll;
};