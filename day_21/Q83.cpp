#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i = 0, v = 0, c = 0;
    cin >> s;
    while(s[i] != '\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            v++;
        else
         c++;

     i++;
    }
    cout << "Vowels = " << v << endl;
    cout << "Consonants = " << c;
    return 0;
}