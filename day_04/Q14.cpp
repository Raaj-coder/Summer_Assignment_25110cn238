#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, c, i;
    cout << "Enter n: ";
    cin >> n;
    if(n == 1)
        cout << a;
    else if(n == 2)
        cout << b;
    else {
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Nth Fibonacci term is " << c;
    }
    return 0;
}