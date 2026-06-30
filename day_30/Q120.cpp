#include <iostream>
using namespace std;

void display(string name[], int marks[])
{
    for(int i=0;i<3;i++)
    {
        cout<<name[i]<<" "<<marks[i]<<endl;
    }
}

int main()
{
    string name[3];
    int marks[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Marks: ";
        cin>>marks[i];
    }

    cout<<"\nStudent Report\n";

    display(name,marks);

    return 0;
}