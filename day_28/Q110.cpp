#include <iostream>
using namespace std;
int main()
{
    int choice;
    float balance = 10000, amount;
    cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n";
    cin >> choice;
    if(choice == 1)
    {
        cin >> amount;
       balance += amount;
    }
    else if(choice == 2)
    {
        cin >> amount;
        balance -= amount;
    }
    cout << "Balance = " << balance;
    return 0;
}