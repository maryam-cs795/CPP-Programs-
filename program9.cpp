#include <iostream>
using namespace std;

int main()
{
    float purchasePrice, sellingPrice;
    float quantity, totalCost, revenue, amount;

    cout << "Enter purchase price: ";
    cin >> purchasePrice;

    cout << "Enter selling price: ";
    cin >> sellingPrice;

    cout << "Enter quantity sold: ";
    cin >> quantity;

    totalCost = purchasePrice * quantity;
    revenue = sellingPrice * quantity;
    amount = revenue - totalCost;

    cout << "Total Purchase Cost = Rs. " << totalCost << endl;
    cout << "Total Sales Revenue = Rs. " << revenue << endl;

    if (amount > 0)
    {
        cout << "Profit = Rs. " << amount;
    }
    else if (amount < 0)
    {
        cout << "Loss = Rs. " << -amount;
    }
    else
    {
        cout << "No Profit No Loss";
    }

    return 0;
}