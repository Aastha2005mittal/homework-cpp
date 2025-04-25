#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int NUM_SUBJECTS = 7;
    string subjects[NUM_SUBJECTS];
    float marks[NUM_SUBJECTS], totalMarks = 0.0;

    // Input subject names
    cout << "Enter the names of " << NUM_SUBJECTS << " subjects:" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> subjects[i];
    }

    // Input marks for each subject
    cout << "\nEnter the marks for each subject (out of 100):" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "Marks in " << subjects[i] << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    // Display marks with subjects
    cout << "\nSubject-wise Marks:" << endl;
    cout << left << setw(15) << "Subject" << setw(10) << "Marks" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << left << setw(15) << subjects[i] << setw(10) << marks[i] << endl;
    }

    // Calculate and display percentage
    float percentage = (totalMarks / (NUM_SUBJECTS * 100)) * 100;
    cout << "\nTotal Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;

    return 0;
}