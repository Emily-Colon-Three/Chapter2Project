#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price = 59.99;
    double percent = .2;
    double discount = price * percent;
    double finalPrice = price - discount;

    cout << setprecision(4) << "The standard price is $" << price << ".\n";
    cout << setprecision(4) << "You can get a discount of $" << discount << " deducted, ";
    cout << setprecision(4) << "resulting in a final discounted price of $" << finalPrice << ".\n";
    return 0;
}
