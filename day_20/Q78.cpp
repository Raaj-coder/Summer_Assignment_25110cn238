#include <iostream>
using namespace std;
int main()
{
    int a[2][2], i, j;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            cin >> a[i][j];
    if(a[0][1] == a[1][0])
        cout << "Symmetric Matrix";
    else
        cout << "Not Symmetric Matrix";
    return 0;
}