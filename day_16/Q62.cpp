#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j, count, max = 0, num;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
 {
        count = 0;
    for(j = 0; j < n; j++)
    {
            if(a[i] == a[j])
               count++;
        }
       if(count > max)
        {
            max = count;
            num = a[i];
        }
    }
    cout << "Element = " << num;
    return 0;
}