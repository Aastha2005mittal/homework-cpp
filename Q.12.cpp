#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;
    sum = 0;
    if (n == 0)
    {
        cout << "Number of digits in Number is : 1" << endl;
    }
    else
    {
        for (; n > 0; n = n / 10)
        {
            sum = sum + 1;
        }
    }
    cout << "Number of digits in Number: " << sum << endl;
    return 0;
}