#include <iostream>
using namespace std;

int main() {
    int hours, minutes;

    cout << "Enter hours (0 to 23): ";
    cin >> hours;
    cout << "Enter minutes (0 to 59): ";
    cin >> minutes;

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time input.";
    } else {
        if (hours < 12) {
            cout << "Time is: " << hours << ":" << minutes << " AM" << endl;
        } else {
            int displayHour = (hours == 12) ? 12 : hours - 12;
            cout << "Time is: " << displayHour << ":" << minutes << " PM" << endl;
        }
    }

    return 0;
}
