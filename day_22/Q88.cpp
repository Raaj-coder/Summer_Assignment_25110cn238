#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i;
    cin.getline(s,100);
    for(i = 0; s[i] != '\0'; i++)
    {
       if(s[i] != ' ')
        {
            cout << s[i];
      }
    }
    return 0;
}