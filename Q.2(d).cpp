#include <iostream>
using namespace std;

int main() {
    float base, height, area;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
    return 0;
}