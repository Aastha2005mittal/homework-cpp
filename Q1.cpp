#include <iostream>

using namespace std;

void addNumbers() {
  int num1, num2, sum;

  cout << "Enter two integers: ";
  cin >> num1 >> num2;

  sum = num1 + num2;

  cout << "Sum = " << sum << endl;
}

int main() {

  addNumbers();
  return 0;
}