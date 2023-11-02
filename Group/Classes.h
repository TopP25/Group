#pragma once
#include <iostream>
using namespace std;

class Subject
{
	string name;
public:
	Subject(string name1)
	{
		Subject::name = name1;
	}
	~Subject()
	{
	
	}
	Subject()
	{
		Subject::name = "undefined";
	}
	string getName()
	{
		return Subject::name;
	}

};


class Student
{
	string name;
	Subject subject("math");
public:

};