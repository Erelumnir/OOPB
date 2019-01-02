#pragma once

#include "Munt.h"
#include <string>

class Koffiemunt : public Munt
{
public:
	Koffiemunt(std::string name, float value);
	~Koffiemunt();
};