#include <iostream>
using namespace std;

int main()
{
    int choice, seats;
    int availableSeats = 50;

    cout << "1. Book Ticket\n";
    cout << "2. Check Available Seats\n";
    cout << "Enter Choice : ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter Number of Tickets : ";
        cin >> seats;

        if(seats <= availableSeats)
        {
            availableSeats = availableSeats - seats;
            cout << "Ticket Booked Successfully\n";
            cout << "Remaining Seats : " << availableSeats;
        }
        else
        {
            cout << "Seats Not Available";
        }
    }
    else if(choice == 2)
    {
        cout << "Available Seats : " << availableSeats;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}