#pragma once
#include <string>

class Persoon
{
public:
	Persoon();
	virtual int getAge();
	virtual std::string getName();
	~Persoon();
};