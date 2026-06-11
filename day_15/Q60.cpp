#include <iostream>
using namespace std;
int main()
{
int a[10], n, i, j = 0, temp;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

            j++;
        }
    }
    cout << "New array: ";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}