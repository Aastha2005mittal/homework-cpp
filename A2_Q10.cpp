#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial;
    return 0;
}
