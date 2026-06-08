// Write function for Armstrong
#include <iostream>
using namespace std;
int armstrong(int n)
{
 int temp, d, sum = 0;
    temp = n;
    while(n != 0)
    {
        d = n % 10;
        sum = sum + (d * d * d);
        n = n / 10;
    }
    if(temp == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}