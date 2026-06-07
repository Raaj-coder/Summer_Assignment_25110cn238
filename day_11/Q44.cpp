#include <iostream>
using namespace std;
int factorial(int n)
{
    int i, fac = 1;
    for(i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);
    return 0;
}