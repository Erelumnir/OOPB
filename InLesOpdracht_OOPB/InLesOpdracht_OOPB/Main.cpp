#include <iostream>
#include <fstream>
#include <string>

#define FILE "C:/Users/Randy/Desktop/GitHub/OOPB/InLesOpdracht_OOPB/InLesOpdracht_OOPB/jabberwocky.txt"

int main()
{
	std::ifstream in_stream;

	in_stream.open(FILE);
	
	if (!in_stream)
	{
		std::cout << "Problem occured opening file." << FILE << std::endl;
		exit(1);
	}

	// char ch;
	//in_stream >> std::noskipws;

	std::string data;

	while (!in_stream.eof()) {
		getline(in_stream, data);
		std::cout << data << std::endl;
	}

	in_stream.close();

	std::cin.get();
	return 0;
}