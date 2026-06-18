#include <iostream>
using namespace std;
int main()
{
    char s[100], ch;
    int i, count = 0;
    cin >> s;
    cin >> ch;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
        {
           count++;
        }
    }
 cout << "Frequency = " << count;
 return 0;
}