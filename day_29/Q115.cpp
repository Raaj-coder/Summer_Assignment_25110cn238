#include <iostream>
using namespace std;

int main()
{
    string s;
    int choice;

    cout<<"Enter String : ";
    cin>>s;

    cout<<"\n1. Find Length";
    cout<<"\n2. Reverse String";
    cout<<"\n3. Convert to Uppercase";
    cout<<"\n4. Convert to Lowercase";

    cout<<"\nEnter Choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Length = "<<s.length();
            break;

        case 2:
            cout<<"Reverse String = ";

            for(int i=s.length()-1;i>=0;i--)
            {
                cout<<s[i];
            }
            break;

        case 3:
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    s[i]=s[i]-32;
                }
            }

            cout<<"Uppercase String = "<<s;
            break;

        case 4:
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    s[i]=s[i]+32;
                }
            }

            cout<<"Lowercase String = "<<s;
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}