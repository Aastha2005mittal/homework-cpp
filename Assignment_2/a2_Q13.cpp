// reverse of a number using a for loop

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    // We'll need to know the number of digits to loop through
    for (int temp = num; temp != 0; temp /= 10) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
