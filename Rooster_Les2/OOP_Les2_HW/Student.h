#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon
{
public:
	Student(int l, std::string n, int ec);
	~Student();
	int getEC();

private:
	int ec;
};