#pragma once

#include "Coin.h"
#include <string>

class Euro : public Coin
{
public:
	Euro(std::string name, float value);
	~Euro();

private:

};
