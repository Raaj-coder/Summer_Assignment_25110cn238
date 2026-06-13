#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], n, m, i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for(i = 0; i < m; i++)
        cin >> b[i];
    for(i = 0; i < n; i++)
        cout << a[i] << " ";
    for(i = 0; i < m; i++)
        cout << b[i] << " ";
    return 0;
}