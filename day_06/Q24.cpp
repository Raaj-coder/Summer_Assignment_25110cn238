#include <iostream>
using namespace std;
int main() {
    int x, n, i, result = 1;
    cout << "Enter x and n: ";
    cin >> x >> n;
    for(i = 1; i <= n; i++) {
        result = result * x;
    }
    cout << "Answer = " << result;
    return 0;
}