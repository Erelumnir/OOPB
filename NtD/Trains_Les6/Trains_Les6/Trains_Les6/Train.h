#pragma once

#include <string>
#include "Transport.h"

class Train : public Transport
{
public:
	Train(int capacity, float price, std::string type);
	~Train();
	int getCapacity() override;
	float getPrice() override;
	std::string getType() override;

private:

};