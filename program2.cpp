#include <iostream>
using namespace std;

int main()
{
    int units, price, total;

    cout << "Enter electricity units: ";
    cin >> units;

    cout << "Enter price per unit: ";
    cin >> price;

    total = units * price;

    cout << "Total Electricity Charges = Rs. " << total;

    return 0;
}