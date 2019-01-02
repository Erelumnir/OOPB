#pragma once

#include "Book.h"
#include <string>

class Library
{
public:
	Library();
	~Library();

	void show();
	void returnBook(std::string type);
	void loanBook();

private:
	Book* book = new Book();
};