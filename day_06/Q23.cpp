#include <iostream>
using namespace std;
int main() {
    int n, rem, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n != 0) {
        rem = n % 2;
        if(rem == 1) {
            count++;
        }
        n = n / 2;
    }
    cout << "Set bits = " << count;
    return 0;
}