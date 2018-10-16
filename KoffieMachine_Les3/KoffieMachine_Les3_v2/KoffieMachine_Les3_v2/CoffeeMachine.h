#pragma once

class CoffeeMachine
{
public:
	CoffeeMachine();
	~CoffeeMachine();
	float GetCoinValue(float reqValue);

private:
	float reqValue;
};
