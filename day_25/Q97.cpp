#include <iostream>
using namespace std;
int main() {
    int a[100], n1, b[100], n2, c[200];
    cin >> n1;
    for(int i=0;i<n1;i++)
        cin >> a[i];
    cin >> n2;
    for(int i=0;i<n2;i++)
        cin >> b[i];
    int k=0;
    for(int i=0;i<n1;i++)
        c[k++]=a[i];
    for(int i=0;i<n2;i++)
        c[k++]=b[i];
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(int i=0;i<k;i++)
        cout<<c[i]<<" ";

}