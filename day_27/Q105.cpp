#include <iostream>
using namespace std;

int main()
{
    int rollNumber;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number : " << rollNumber << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    return 0;
}