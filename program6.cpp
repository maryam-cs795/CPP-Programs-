
#include <iostream>
using namespace std;

int main()
{
    float bill, friends, share;

    cout << "Enter total restaurant bill: ";
    cin >> bill;

    cout << "Enter number of friends: ";
    cin >> friends;

    share = bill / friends;

    cout << "Each Friend Will Pay = Rs. " << share;

    return 0;
}