#include <iostream>
using namespace std;

int main()
{
    int answer;
    int score = 0;

    cout << "What is the capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Lucknow\n4. Chennai\n";

    cin >> answer;

    if(answer == 1)
    {
        score++;
        cout << "Correct Answer\n";
    }
    else
    {
        cout << "Wrong Answer\n";
    }

    cout << "Your Score = " << score;

    return 0;
}