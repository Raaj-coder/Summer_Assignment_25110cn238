// sum and average of array
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, sum = 0;
    float avg;
    cout << "Enter size: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    avg = sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;
    return 0;
}