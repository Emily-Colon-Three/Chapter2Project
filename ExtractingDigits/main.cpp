#include <iostream>

using namespace std;

int main()
{
    int d1, d2, d3, d4, input;

    // Takes input
    cout << "What number will you input?\n";
    cin >> input;

    // Finds digits of input number using modulus
    d1 = input %10;
    input = input /10;
    d2 = input %10;
    input = input /10;
    d3 = input %10;
    input = input /10;
    d4 = input %10;
    input = input /10;

    // Output and return
    cout << "You number is composed of digits " << d1 << ", " << d2 << ", " << d3 << ", and " << d4 << ".\n";
    return 0;
}
