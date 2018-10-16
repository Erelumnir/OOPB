#pragma once
class Subject
{
public:
	Subject(char s, int x, int y);
	int position();
	char showInformation(char i);

private:
	char subject;
	char information;
	int xPos;
	int yPos;
};