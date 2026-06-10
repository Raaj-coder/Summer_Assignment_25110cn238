#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, x, count = 0;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element: ";
    cin >> x;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            count++;
        }
    }
    cout << "Frequency = " << count;
    return 0;
}