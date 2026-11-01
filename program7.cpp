#include <iostream>
using namespace std;

int main()
{
    int age, months, weeks, days;

    cout << "Enter age in years: ";
    cin >> age;

    months = age * 12;
    weeks = age * 52;
    days = age * 365;

    cout << "Age in Months = " << months << endl;
    cout << "Age in Weeks = " << weeks << endl;
    cout << "Age in Days = " << days;

    return 0;
}