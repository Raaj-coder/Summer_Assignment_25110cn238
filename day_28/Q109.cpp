#include <iostream>
using namespace std;
int main()
{
    string book;
    int choice;
    cout << "1. Issue Book\n2. Return Book\n";
    cin >> choice;
    cout << "Enter Book Name: ";
    cin >> book;
    if(choice == 1)
        cout << book << " Issued Successfully";
    else
        cout << book << " Returned Successfully";
    return 0;
}