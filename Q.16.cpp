#include <iostream>
using namespace std;
int main()
{
    int num;
    do
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num >= 0)
        {
            cout << "You entered: " << num << endl;
        }
    } while (num >= 0);
    cout << "Negative number entered. Exiting program." << endl;
    return 0;
}