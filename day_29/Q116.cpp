#include <iostream>
using namespace std;
int main()
{
    string productName;
    int quantity = 0;
    float price = 0;
    int choice;
    cout << "1. Add Product\n";
    cout << "2. Update Quantity\n";
    cout << "3. View Product Details\n";
    cout << "Enter Choice : ";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Enter Product Name : ";
            cin >> productName;
            cout << "Enter Quantity : ";
            cin >> quantity;
            cout << "Enter Price : ";
            cin >> price;
            cout << "\nProduct Added Successfully";
            break;
        case 2:
            cout << "Enter New Quantity : ";
            cin >> quantity;
            cout << "Quantity Updated Successfully";
            break;
        case 3:
            cout << "\n----- Product Details -----\n";
            cout << "Product Name : " << productName << endl;
            cout << "Quantity     : " << quantity << endl;
            cout << "Price        : " << price << endl;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}