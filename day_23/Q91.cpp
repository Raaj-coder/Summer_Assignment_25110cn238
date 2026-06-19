#include <iostream>
using namespace std;
int main()
{
    char a[100], b[100];
    int i = 0, sum1 = 0, sum2 = 0;
    cin >> a >> b;
    while(a[i] != '\0')
    {
        sum1 = sum1 + a[i];
        i++;
    }

    i = 0;

    while(b[i] != '\0')
    {
        sum2 = sum2 + b[i];
        i++;
    }
    if(sum1 == sum2)
        cout << "Anagram";
    else
        cout << "Not Anagram";
    return 0;
}