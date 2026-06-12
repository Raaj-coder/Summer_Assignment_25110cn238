#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j, sum;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

 cin >> sum;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                cout << a[i] << " " << a[j];
                return 0;
            }
        }
    }
    cout << "No pair found";
    return 0;
}