#include <iostream>
using namespace std;

int main() {
    float radius, circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circumference = 2 * 3.14 * radius;
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
}