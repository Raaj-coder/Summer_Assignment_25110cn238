#include <iostream>
using namespace std;
int main() {
    int n, i, j, prime;
    cout << "Enter last number: ";
    cin >> n;
    for(i = 2; i <= n; i++) {
        prime = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
            }
        }
        if(prime == 1) {
            cout << i << endl;
        }
    }
    return 0;
}