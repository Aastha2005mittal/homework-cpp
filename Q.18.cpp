#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients of the quadratic equation
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cin >> a >> b >> c;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check discriminant and compute roots accordingly
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two distinct real roots: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = -b / (2 * a);
        cout << "The equation has one real root (repeated): " << root1 << endl;
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The equation has complex roots:" << endl;
        cout << realPart << " + " << imaginaryPart << "i" << " and " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}