#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Subject {
	vector<string> names;
public:
	Subject() {
	}
	Subject(string name_file) {
		ifstream file_in(name_file);
		if (!file_in.is_open()) {
			cout << "File name: " << name_file << " EROR!";
		}
		string name;
		while (!file_in.eof())
		{
			file_in >> name;
			names.push_back(name);
		}
	}
	vector<string> getName() {
		return names;
	}
	void setName(string name) {
		names.push_back(name);
	}
	void printNames() {
		for (auto s : names) {
			cout << s << endl;
		}
	}
	void printNames(int count) {
		if (count < (names.size() + 1)) {
			for (size_t i = 0; i < count; i++)
			{
				cout << names[i] << endl;
			}
		}
		else {
			this->printNames();
		}

	}
	~Subject() {
		names.~vector();
	}
};