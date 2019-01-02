#pragma once

#include "Munt.h"
#include <string>

class Cent : public Munt
{
public:
	Cent(std::string name, float value);
	~Cent();

private:

};