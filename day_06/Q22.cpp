#include <iostream>
using namespace std;
int main(){
    int bin, rem, dec = 0, d = 1;
    cout << "Enter a binary number: ";
    cin >> bin;
    while(bin != 0) {
        rem = bin % 10;
        dec = dec + rem * d;
        d = d * 2;
        bin = bin / 10;
    }
    cout << "Decimal = " << dec;
    return 0;
}