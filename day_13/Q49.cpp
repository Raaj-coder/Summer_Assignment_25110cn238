// print array from user...
#include <iostream>
using namespace std;
int main()
{
 int a[10], n, i;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  cout << "Array elements are: ";

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}