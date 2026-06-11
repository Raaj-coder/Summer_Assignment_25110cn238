#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    cout << "Enter size: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Reverse array: ";
    for(i=n-1; i>=0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}