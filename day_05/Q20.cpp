#include <iostream>
using namespace std;
int main(){
    int n, i, j, prime, large = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            prime = 1;
            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    prime = 0;
                }
            }
            if(prime == 1) {
                large = i;
            }
        }
    }
    cout << "Largest Prime Factor is: = " << large;
    return 0;
}