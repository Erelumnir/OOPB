#include <iostream>
#include <fstream>
#include <string>

#define FILE "G:/GitHub/OOPB/TekstPrint_Les4/Main/jabberwoocky.txt"
#define OUTFILE "G:/GitHub/OOPB/TekstPrint_Les4/Main/output.txt"

int countCharacterInFile()
{
	char ch;

	// in_stream variable
	std::ifstream in_stream;

	int count = 0;

	// Open stream
	in_stream.open(FILE);

	in_stream.get(ch);

	// As long as we don't fail to read the stream keep counting.
	while (!in_stream.fail()) 
	{
		count++;
		in_stream.get(ch);
	}

	// Close the stream
	in_stream.close();

	// Print result to console
	std::cout << count << " character in file." << std::endl;

	return count;
}

char getCharacterAtPosition(int number)
{

	// Variables
	char ch;
	std::ifstream fileInput;

	// Open the fileInput
	fileInput.open(FILE);

	// For every i get the char 
	for (int i = 0; i < number; i++) 
	{
		fileInput.get(ch);
	}

	fileInput.get(ch);

	return ch;
}

int main()
{
	// Variables
	int count;
	char ch;

	std::ifstream in_stream;
	std::ofstream out_stream;

	count = countCharacterInFile();

	// Open Streams
	in_stream.open(FILE);
	out_stream.open(OUTFILE);

	// in_stream Manipulators
	in_stream >> std::noskipws;
	in_stream >> ch;

	// Error Checks
	if(!in_stream)
	{
		std::cout << "Problems opening file destination" << std::endl;
		exit(1);
	}
	if (!out_stream)
	{
		std::cout << "Problems opening file destination" << std::endl;
		exit(2);
	}

	// Reversing
	for (int number = count; number > 0; number--)
	{
		ch << getCharacterAtPosition(number);
		std::cout << getCharacterAtPosition(number);
		out_stream << getCharacterAtPosition(number);
	}

	// Close Streams
	in_stream.close();
	out_stream.close();
 
	return 0;
}

/* 
What do the error codes mean:
(0) = Everything went fine;
(1) = Problems opening the input file (FILE)
(2) = Problems opening the output file (OUTFILE)
*/