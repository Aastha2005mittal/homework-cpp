#include <iostream>
#include <string.h> 

using namespace std;

int main() {
  char str[100]; // Declare a character array (string)

  cout << "Enter a string (uppercase): ";
  cin.getline(str, 100); // Read the input string

  // Convert the string to lowercase using strlwr()
  char* lowerStr = strlwr(str);

  if (lowerStr != nullptr) {
    cout << "Lowercase string: " << lowerStr << endl;
  } else {
    cout << "Error: Could not convert the string to lowercase." << endl;
  }

  return 0;
}