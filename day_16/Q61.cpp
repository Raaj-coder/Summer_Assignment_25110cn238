#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, sum = 0, total;

    cin >> n;

    for(i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    cout << "Missing number = " << total - sum;

    return 0;
}