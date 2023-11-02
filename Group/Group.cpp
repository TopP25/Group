#include <iostream>
#include "Subject.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    Subject subject("Subject.txt");
    subject.printNames();
    cout << endl;
    subject.printNames(3);
}
