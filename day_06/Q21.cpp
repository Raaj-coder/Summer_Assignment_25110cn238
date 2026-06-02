#include <iostream>
using namespace std;
int main(){
    int n, rem, bin = 0, d = 1;
    cout << "Enter a decimal number: ";
    cin >> n;
    while(n != 0) {
        rem = n % 2;
        bin = bin + rem * d;
        d = d * 10;
        n = n / 2;
    }
    cout << "Binary = " << bin;
    return 0;
}