#include <iostream>
using namespace std;

int main()
{
    float length, width, height;
    float volume, capacity;

    cout << "Enter length in metres: ";
    cin >> length;

    cout << "Enter width in metres: ";
    cin >> width;

    cout << "Enter height in metres: ";
    cin >> height;

    volume = length * width * height;
    capacity = volume * 1000;

    cout << "Volume = " << volume << " cubic metres" << endl;
    cout << "Capacity = " << capacity << " litres";

    return 0;
}