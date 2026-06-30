#include <iostream>
using namespace std;
int main()
{
    int roll[5];
    string name[5];
    int marks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Roll No: ";
        cin>>roll[i];

        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Marks: ";
        cin>>marks[i];
    }
    cout<<"\nStudent Records\n";
    for(int i=0;i<5;i++)
    {
        cout<<roll[i]<<" "
            <<name[i]<<" "
            <<marks[i]<<endl;
    }
    return 0;
}