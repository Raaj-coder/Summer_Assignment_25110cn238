#include <iostream>
using namespace std;

int main()
{
    int id[3];
    string name[3];
    float salary[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter ID: ";
        cin>>id[i];

        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Salary: ";
        cin>>salary[i];
    }

    cout<<"\nEmployee Details\n";

    for(int i=0;i<3;i++)
    {
        cout<<id[i]<<" "
            <<name[i]<<" "
            <<salary[i]<<endl;
    }

    return 0;
}