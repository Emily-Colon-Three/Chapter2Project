#include <iostream>

using namespace std;

int main()
{
    float percent, money, floatingPercent, finalAmount;

    cout << "What is the interest, in percentage?\n";
    cin >> percent;
    cout << "What is the amount of money?\n";
    cin >> money;

    floatingPercent = percent / 100;
    finalAmount = floatingPercent * money;
    cout << "The amount put away for retirement amounts to $" << finalAmount << ".\n";

    return 0;
}
