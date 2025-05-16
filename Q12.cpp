#include <iostream>

using namespace std;

// Function to find the maximum and minimum elements in a 2D array
void findMinMax(int arr[][100], int rows, int cols, int& minVal, int& maxVal) {
  if (rows <= 0 || cols <= 0) {
    cout << "Error: Invalid array dimensions." << endl;
    return;
  }

  minVal = arr[0][0]; // Initialize min with the first element
  maxVal = arr[0][0]; // Initialize max with the first element

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] < minVal) {
        minVal = arr[i][j];
      }
      if (arr[i][j] > maxVal) {
        maxVal = arr[i][j];
      }
    }
  }
}

int main() {
  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;

  cout << "Enter the number of columns: ";
  cin >> cols;

  int Array[100][100]; // Declare a 2D array with a maximum size (adjust if needed)

  cout << "Enter the elements of the 2D array:" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> Array[i][j];
    }
  }

  int minimum, maximum;
  findMinMax(Array, rows, cols, minimum, maximum);

  if (rows > 0 && cols > 0) {
    cout << "Minimum element in the array: " << minimum << endl;
    cout << "Maximum element in the array: " << maximum << endl;
  } else {
    cout << "Array was empty or had invalid dimensions." << endl;
  }

  return 0;
}