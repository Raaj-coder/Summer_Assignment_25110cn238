#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Duplicate elements are: ";
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                cout << a[i] << " ";
            }
        }
    }
 return 0;
}