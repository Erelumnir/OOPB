#pragma once
#include <string>

class Munt
{
public:
	Munt(std::string n, float v);
	~Munt();
	std::string GetName();
	float GetValue();

private:
	float value;
	std::string name;
};