#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (; number > 0; number /= 10) {
        sum += number % 10;
    }

    cout << "Sum of digits = " << sum;
    return 0;
}
