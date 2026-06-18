#include <iostream>
using namespace std;
int main()
{
    char s[100];
int i, count = 1;

  cin.getline(s,100);

    for(i = 0; s[i] != '\0'; i++)
    {
       if(s[i] == ' ')
        {
            count++;
      }
    }
 cout << "Words = " << count;
    return 0;
}