#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for(j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }
        for(j = i - 2; j >= 0; j--)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
    return 0;
}