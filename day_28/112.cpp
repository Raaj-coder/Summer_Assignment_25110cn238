#include <iostream>
using namespace std;
int main()
{
    string name[3];
    long long number[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        cout << "Enter Name : ";
        cin >> name[i];

        cout << "Enter Number : ";
        cin >> number[i];
    }
    cout << "\nSaved Contacts\n";

    for(i = 0; i < 3; i++)
    {
        cout << name[i] << " : " << number[i] << endl;
    }

    return 0;
}