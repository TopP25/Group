#pragma once
#include "Subject.h"
#include <hash_map>
#include <time.h>

class Student {
	string name;
	Subject* subject;
	hash_map<string, vector<int>> jornal;
public:
	Student(string name, string name_file){
		this->name = name;
		ifstream file_in(name_file);
		if (!file_in.is_open()) {
			cout << "File name: " << name_file << " EROR!";
		}
		string n;
		while (!file_in.eof())
		{
			file_in >> n;
			while (!file_in.eof())
			{
				file_in >> n;
				vector<int> estimation;

				jornal[n]
			}
		}
	}
	vector<int> estimation(int t) {
		srand(time(0));
		vector<int> est;
		for (size_t i = 0; i < t; i++)
		{
			est.push_back(rand() % 5 + 2);
		}
	}

};