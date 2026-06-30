#include <iostream>
using namespace std;

int main()
{
    string books[5]={"math","C++","Java","Python","DBMS"};
    int choice;

    cout<<"1. Show Books\n";
    cout<<"2. Issue Book\n";

    cin>>choice;

    if(choice==1)
    {
        for(int i=0;i<5;i++)
        {
            cout<<books[i]<<endl;
        }
    }

    else if(choice==2)
    {
        string book;

        cout<<"Enter Book Name: ";
        cin>>book;

        cout<<book<<" Issued Successfully";
    }

    return 0;
}