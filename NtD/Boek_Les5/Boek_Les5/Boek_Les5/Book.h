#pragma once

#include <string>

class Book
{
public:
	Book();
	Book(std::string type);
	~Book();
	
	std::string name = "Empty";
};