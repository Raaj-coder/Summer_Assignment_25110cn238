#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i = 0, len = 0;
    cin >> s;
    while(s[len] != '\0')
    {
        len++;
    }
    for(i = 0; i < len / 2; i++)
    {
        if(s[i] != s[len - 1 - i])
        {
         cout << "Not Palindrome";
            return 0;
      }
    }

   cout << "Palindrome";
                            
    return 0;
}