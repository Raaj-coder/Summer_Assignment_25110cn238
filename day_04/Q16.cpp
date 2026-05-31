#include <iostream>
using namespace std;
int main() {
    int n, i, temp, d, sum;
    cout << "Enter last number: ";
    cin >> n;
    for(i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while(temp != 0) {
            d = temp % 10;
            sum = sum + d * d * d;
            temp = temp / 10;
        }
        if(sum == i) {
            cout << i << endl;
        }
    }
    return 0;
}