#pragma once
class Classroom
{
public:
	Classroom(char l, int f, int r);
	int showLocation(int f, int r);

private:
	char location;
	int floor;
	int roomnumber;
};