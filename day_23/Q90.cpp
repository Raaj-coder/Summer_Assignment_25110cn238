#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i, j;
    cin >> s;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                cout << s[i];
            return 0;
            }
        }
    }
    return 0;
}