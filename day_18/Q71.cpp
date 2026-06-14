#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, x;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
          cout << "Found";
          break;
        }
    }
    return 0;
}