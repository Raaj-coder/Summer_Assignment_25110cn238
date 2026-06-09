#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, even = 0, odd = 0;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd;
    return 0;
}