#pragma once

#include "Munt.h"
#include <string>

class Euro : public Munt
{
public:
	Euro(std::string name, float value);
	~Euro();

private:

};