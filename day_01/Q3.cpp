#include <iostream>
using namespace std;
int main() {
    int n, i, fac = 1;
    cout << "Enter factorial value: ";
    cin >> n;
    for(i = 1; i <= n; i++) {
        fac = fac * i;
    }
    cout << "The factorial is " << fac;
    return 0;
}