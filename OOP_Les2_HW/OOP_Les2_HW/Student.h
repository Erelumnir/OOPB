#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon
{
public:
	Student(int l, std::string n);
	~Student();
	int getAge();
	std::string getName();

private:
	int leeftijd;
	std::string naam;
};