#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, x;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> x;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            cout << "Element found";
            break;
        }
    }
    return 0;
}