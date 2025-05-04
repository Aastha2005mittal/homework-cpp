#include <iostream>
using namespace std;

int main() {
    float units, bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 50) {
        bill = units * 0.50;
    }
    else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    float surcharge = bill * 0.20;  // 20% surcharge
    float total = bill + surcharge;

    cout << "Electricity Bill = Rs. " << total << endl;

    return 0;
}
