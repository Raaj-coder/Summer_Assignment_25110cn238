#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    int large, second;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    large = second = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > large)
        {
            second = large;
            large = a[i];
        }
    }
    cout << "Second largest = " << second;
    return 0;
}