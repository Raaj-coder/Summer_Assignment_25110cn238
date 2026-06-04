#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }
    return 0;
}