#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i,sum=0;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        sum += a[i];

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(float)sum/n;

    return 0;
}