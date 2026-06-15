#include <iostream>
using namespace std;
int main()
{
 int a[2][2], i, j, sum = 0;

    for(i=0; i<2; i++)
    {
     for(j=0; j<2; j++)
            cin >> a[i][j];
    }
    for(i=0; i<2; i++)
 {
        sum = sum + a[i][i];
 }
    cout << "Sum = " << sum;
    return 0;
}