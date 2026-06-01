#include <iostream>
using namespace std;
int main() {
    int n, temp, rem, i, fac, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while(n != 0){
        rem = n % 10;
        fac = 1;
        for(i = 1; i <= rem; i++) {
            fac = fac * i;
        }
        sum = sum + fac;
        n = n / 10;
    }
    if(sum == temp) {
        cout << "Strong number hai ";
    }
    else {
        cout << "ye strong number nhi hai... ";
    }
    return 0;
}