#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i = 0;
    cin >> s;
    while(s[i] != '\0')
    {
        i++;
    }
    for(i = i - 1; i >= 0; i--)
    {
     cout << s[i];
    }
    return 0;
}