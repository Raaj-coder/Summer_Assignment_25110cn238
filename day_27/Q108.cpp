#include <iostream>
using namespace std;
int main()
{
    string name;
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    cout << "\n MARKSHEET\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << roll << endl;
   cout << "Total Marks: " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

 if(percentage >= 90)
        cout << "Grade : A+";
    else if(percentage >= 80)
        cout << "Grade : A";
    else if(percentage >= 70)
        cout << "Grade : B";
  else if(percentage >= 60)
        cout << "Grade : C";
  else if(percentage >= 40)
        cout << "Grade : D";
    else
        cout << "Grade : F";
    return 0;
}