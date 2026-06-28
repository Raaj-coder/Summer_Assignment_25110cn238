#include <iostream>
using namespace std;
int main()
{
    int n = 7, guess;
    cout << "Guess number: ";
    cin >> guess;
    if(guess == n)
        cout << "Correct Guess";
    else
        cout << "Wrong Guess";
    return 0;
}