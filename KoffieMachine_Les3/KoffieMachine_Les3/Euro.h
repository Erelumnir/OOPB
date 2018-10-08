#pragma once

#include <string>

class Euro
{
public:
	Euro(std::string name, int value);
	~Euro();
	std::string GetName();
	int GetValue();

private:
	int value;
	std::string name;
};