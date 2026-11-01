#include <iostream>
using namespace std;

int main()
{
    int notebookPrice, notebookQty;
    int penPrice, penQty, total;

    cout << "Enter notebook price: ";
    cin >> notebookPrice;

    cout << "Enter notebook quantity: ";
    cin >> notebookQty;

    cout << "Enter pen price: ";
    cin >> penPrice;

    cout << "Enter pen quantity: ";
    cin >> penQty;

    total = (notebookPrice * notebookQty) +
            (penPrice * penQty);

    cout << "Total Shopping Bill = Rs. " << total;

    return 0;
}