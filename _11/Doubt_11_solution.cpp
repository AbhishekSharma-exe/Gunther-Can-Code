// Debugged program for doubt 11

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 9)  // changed the condition in if using logical AND operator which will make sure both the condition is true or not
    {
        if (n == 1)
        {
            cout << "one";
        }
        else if (n == 2)
        {
            cout << "two";
        }
        else if (n == 3)
        {
            cout << "three";
        }
        else if (n == 4)
        {
            cout << "four";
        }
        else if (n == 5)
        {
            cout << "five";
        }
        else if (n == 6)
        {
            cout << "six";
        }
        else if (n == 7)
        {
            cout << "seven";
        }
        else if (n == 8)
        {
            cout << "eight";
        }
        else if (n == 9)
        {
            cout << "nine";
        }
    }
    else if (n < 1)    // Added this Extra condition for making it more general
    {
        cout << "Less than 1";
    }
    else
    {
        cout << "Greater than 9";
    }
    return 0;
}