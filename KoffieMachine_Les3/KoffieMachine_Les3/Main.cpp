#include <iostream>
#include "Euro.h"
#include "OneEuro.h"
#include "TwoEuro.h"
#include "CoffeeCoin.h"

int main()
{
	// Object Casting
	OneEuro oneEuro = OneEuro("One Euro", 1);
	TwoEuro twoEuro = TwoEuro("Two Euro", 2);
	CoffeeCoin coffeeCoin = CoffeeCoin("Coffee Coin", 1, true);

	// print values
	std::cout << "This coin has a value of " << oneEuro.GetValue() << std::endl;
	std::cout << "This coin has a value of " << twoEuro.GetValue() << std::endl;
	std::cout << "This coin has a value of " << coffeeCoin.GetValue() << std::endl;

	// print names
	std::cout << "This is an " << oneEuro.GetName() << std::endl;
	std::cout << "This is an " << twoEuro.GetName() << std::endl;
	std::cout << "This is an " << coffeeCoin.GetName() << std::endl;

	return 0;
};