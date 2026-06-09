#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, large, small;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    large = a[0];
    small = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
        }
        if(a[i] < small)
        {
            small = a[i];
        }
    }
    cout << "Largest = " << large << endl;
    cout << "Smallest = " << small;
    return 0;
}