#pragma once

#include "Euro.h"
#include <string>

class CoffeeCoin : public Euro
{
public:
	CoffeeCoin(std::string name, int value, bool canBuyAll);
	~CoffeeCoin();

private:
	bool canBuyAll;
};