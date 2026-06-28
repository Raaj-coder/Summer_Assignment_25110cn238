#include <iostream>
using namespace std;

int main()
{
    int employeeId;
    string employeeName;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> employeeId;

    cout << "Enter Employee Name: ";
    cin >> employeeName;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\nEmployee Details\n";
    cout << "ID     : " << employeeId << endl;
    cout << "Name   : " << employeeName << endl;
    cout << "Salary : " << salary << endl;

    return 0;
}