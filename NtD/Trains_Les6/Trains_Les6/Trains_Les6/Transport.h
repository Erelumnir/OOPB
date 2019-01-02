#pragma once

#include <string>



class Transport
{
public:
	Transport(int capacity, float price, std::string type);
	~Transport();

	virtual int getCapacity() = 0;
	virtual float getPrice() = 0;
	virtual std::string getType() = 0;

private:
	// Capacity of train
	int capacity;
	// Base price of train
	float price;
	// Type of train
	std::string type;
};