#include <iostream>
#include <string>

using namespace std;

class Subject {
    string name;
public: 
    Subject(string str) {
        name = str;
    }
    string getName() {
        return name;
    }
    ~Subject() {

    }
};