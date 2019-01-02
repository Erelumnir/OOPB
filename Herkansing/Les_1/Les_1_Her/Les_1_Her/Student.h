#pragma once
#include <string>

class Student
{
public:
	Student();
	int getEC();				//Return ec
	std::string getName();		//Return naam

private:
	std::string naam;
	int ec;
};

