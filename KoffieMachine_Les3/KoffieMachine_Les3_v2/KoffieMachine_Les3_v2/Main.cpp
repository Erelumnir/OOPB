#include <iostream>
#include "Coin.h"
#include "Euro.h"
#include "Cent.h"
#include "CoffeeCoin.h"

int main()
{
	// Local Variable
	char input;

	// Object Casting
	Euro euro = Euro("One Euro", 1.0);
	Cent cent = Cent("Two Euro", 0.5);
	CoffeeCoin coffeeCoin = CoffeeCoin("Coffee Coin", 0, true);

	// print values
	std::cout << "This coin has a value of " << euro.GetValue() << std::endl;
	std::cout << "This coin has a value of " << cent.GetValue() << std::endl;
	std::cout << "This coin has a value of " << coffeeCoin.GetValue() << std::endl;

	// print names
	std::cout << "This is an " << euro.GetName() << std::endl;
	std::cout << "This is an " << cent.GetName() << std::endl;
	std::cout << "This is an " << coffeeCoin.GetName() << std::endl;

	// close prevention
	std::cout << "Press a button to close" << std::endl;
	std::cin >> input;

	return 0;
};