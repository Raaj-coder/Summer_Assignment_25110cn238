#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j;
    cin >> n;
  for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
        if(a[i] == a[j])
                break;
        }
        if(i == j)
         cout << a[i] << " ";
 }
    return 0;
}