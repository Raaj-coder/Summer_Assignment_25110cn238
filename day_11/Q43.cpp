#include <iostream>
using namespace std;
int prime(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
  if(prime(n))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";
  return 0;
}