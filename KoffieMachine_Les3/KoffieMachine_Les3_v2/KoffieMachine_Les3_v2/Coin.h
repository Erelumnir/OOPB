#pragma once

#include <string>

class Coin
{
public:
	Coin(std::string name, float value);
	~Coin();
	std::string GetName();
	float GetValue();

private:
	float value;
	std::string name;
};
