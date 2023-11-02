#pragma once
#include "Subject.h"
#include <map>
#include <time.h>

class Student {
	string name;
	Subject subject;
	map<string, vector<int>> jornal;
public:
	Student(string name, string name_file){
		srand(time(0));
		this->name = name;
		ifstream file_in(name_file);
		if (!file_in.is_open()) {
			cout << "File name: " << name_file << " EROR!";
		}
		string n;
			while (!file_in.eof())
			{
				file_in >> n;
				subject.setName(n);
				jornal[n] = estimation(5);
			}
	}
	Student(string name_file) {
		srand(time(0));
		ifstream file_in(name_file);
		if (!file_in.is_open()) {
			cout << "File name: " << name_file << " EROR!";
		}
		file_in >> name;
		string n;
		while (!file_in.eof())
		{
			file_in >> n;
			while (!file_in.eof())
			{
				file_in >> n;
				subject.setName(n);
				jornal[n] = estimation(5);
			}
		}
	}
	vector<int> estimation(int t) {
		vector<int> est;
		for (size_t i = 0; i < t; i++)
		{
			est.push_back(rand() % 4 + 2);
		}
		return est;
	}

	void printStudent() {
		cout << "Предметы: " << endl;
		subject.printNames();
		cout << "Hash_map: " << endl;
		for (auto c : subject.getName()) {
			cout << c << ": ";
			for (auto s : jornal[c]) {
				cout << s << ", ";
			}
			cout << endl;
		}
	}

	~Student() {
		subject.~Subject();
	}

};