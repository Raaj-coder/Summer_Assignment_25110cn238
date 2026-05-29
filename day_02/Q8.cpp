#include <iostream>
using namespace std;
int main() {
    int n, temp, d, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while(n != 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    if(temp == rev) {
        cout << "Palindrome number";
    }
    else {
        cout << "Not a palindrome number";
    }
    return 0;
}