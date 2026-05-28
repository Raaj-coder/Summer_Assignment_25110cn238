#include <iostream>
using namespace std;
int main() {
    int n, i, table = 1;
    cout << "Enter number for table: ";
    cin >> n;
    for(i = 1; i <= 10; i++) {
        table = n * i;
        cout << n << " * " << i << " = " << table << endl;
    }
    return 0;
}