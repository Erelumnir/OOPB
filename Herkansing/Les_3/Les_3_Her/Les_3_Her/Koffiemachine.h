#pragma once
#include "Euro.h"
#include "Cent.h"
#include "Koffiemunt.h"

class Koffiemachine
{
public:
	Koffiemachine();
	int acceptCoin(Euro euro);
	int acceptCoin(Cent cent);
	int acceptCoin(Koffiemunt koffiemunt);
	~Koffiemachine();
};