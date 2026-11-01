#include <iostream>
using namespace std;

int main()
{
    float distance, average, petrolPrice;
    float petrol, cost;

    cout << "Enter distance travelled: ";
    cin >> distance;

    cout << "Enter average km per litre: ";
    cin >> average;

    cout << "Enter petrol price per litre: ";
    cin >> petrolPrice;

    petrol = distance / average;
    cost = petrol * petrolPrice;

    cout << "Petrol Consumed = " << petrol << " litres" << endl;
    cout << "Total Fuel Cost = Rs. " << cost;

    return 0;
}