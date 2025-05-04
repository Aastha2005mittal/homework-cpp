#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3, sum;

    // Input the three angles
    cout << "Enter the three angles of the triangle (in degrees):" << endl;
    cin >> angle1 >> angle2 >> angle3;

    // Calculate the sum of the angles
    sum = angle1 + angle2 + angle3;

    // Check if the triangle is valid
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}