#include <iostream>
using namespace std;

int main() {
    float length, width, area;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}