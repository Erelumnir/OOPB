#include "stdafx.h"
#include "Subject.h"
#include "Teacher.h"
#include "Time.h"
#include "Classroom.h"

using namespace std;

/*
s = subject
x = xPos
y = yPos
t = teacher
c = contact
i = information
f = floor
l = location
r = roomnumber
t = time
d = duration;
*/

// Subject Class
Subject::Subject(char s, int x, int y) 
{
	subject = s;
	xPos = x;
	yPos = y;
}

// Should return information
char Subject::showInformation(char i) 
{
	information = i;
	return information;
}

// Should return position (Obsolete)
int Subject::position() 
{
	return xPos + yPos;
}

// Teacher Class
Teacher::Teacher(char t)
{
	teacher = t;
}

// Should return any contact information
void Teacher::showContactInformation(char c)
{
	contact = c;
}

// Time Class
Time::Time(int t, int d)
{
	time = t;
	duration = d;
}

// Should return finishing time (time (start) + duration = time (end))
int Time::showTime()
{
	return duration + time;
}

// Classroom Class
Classroom::Classroom(char l, int f, int r)
{
	location = l;
	floor = f;
	roomnumber = r;
}

// Should return floor and roomnumber
int Classroom::showLocation(int f, int r)
{
	return floor + roomnumber;
}