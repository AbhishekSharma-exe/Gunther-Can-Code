//  Explaination of Doubt

/*The expression used in a switch statement must have an integral or enumerated type.
  The expression provided in the switch should result in a constant value otherwise it would not be valid.*/

// Alternative of the Program

#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter a positive integer: ";
    cin >> n;
    a = n % 2;
    switch (a)
    {
    case 0:
        cout << "The given number is EVEN.";
        break;
    case 1:
        cout << "The given number is ODD.";
        break;
    }
    return 0;
}