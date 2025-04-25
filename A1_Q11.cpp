#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;
    cout << "Temperature in Kelvin = " << kelvin << endl;

    return 0;
}
