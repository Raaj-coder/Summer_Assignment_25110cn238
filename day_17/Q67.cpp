#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], n, m, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for(i = 0; i < m; i++)
        cin >> b[i];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
              cout << a[i] << " ";
        }
    }
    return 0;
}