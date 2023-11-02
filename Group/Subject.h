#pragma once
#include <iostream>
#include <string>
class Subject
{
	string name;
public:
	Subject(string str) 
	{
		name = str;
	}
	string getName() 
	{
		return name;
	}
	~Subject() 
	{

	}
};