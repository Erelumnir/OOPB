#pragma once

#include "Coin.h"
#include <string>

class Cent : public Coin
{
public:
	Cent(std::string name, float value);
	~Cent();

private:

};