#include <iostream>

using namespace std;

void printPrimes(int start, int end) {
  cout << "Prime numbers between " << start << " and " << end << " are: ";
  for (int num = start; num <= end; num++) {
    if (num <= 1) {
      continue; // Skip numbers less than or equal to 1
    }
    bool isPrime = true; // Assume the number is prime initially
    for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        isPrime = false; // If divisible, it's not prime
        break;
      }
    }
    if (isPrime) {
      cout << num << " ";
    }
  }
  cout << endl;
}

int main() {
  int starting, ending;

  cout << "Enter the starting range: ";
  cin >> starting;

  cout << "Enter the ending range: ";
  cin >> ending;

  printPrimes(starting, ending);

  return 0;
}
