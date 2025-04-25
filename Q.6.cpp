#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    // Swapping process
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}