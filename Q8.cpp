#include <iostream>

using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
  int i = 0; // Index for arr1
  int j = 0; // Index for arr2
  int k = 0; // Index for mergedArr

  // Iterate through both arrays as long as there are elements in both
  while (i < size1 && j < size2) {
    mergedArr[k++] = arr1[i++];
    mergedArr[k++] = arr2[j++];
  }

  // Add any remaining elements from arr1 (if any)
  while (i < size1) {
    mergedArr[k++] = arr1[i++];
  }

  // Add any remaining elements from arr2 (if any)
  while (j < size2) {
    mergedArr[k++] = arr2[j++];
  }
}

int main() {
  int array1[] = {1, 3, 5, 7};
  int size1 = sizeof(array1) / sizeof(array1[0]);

  int array2[] = {2, 4, 6, 8, 10};
  int size2 = sizeof(array2) / sizeof(array2[0]);

  int mergedSize = size1 + size2;
  int mergedArray[mergedSize]; // Declare the merged array with the combined size

  mergeArrays(array1, size1, array2, size2, mergedArray);

  cout << "Array 1: ";
  for (int i = 0; i < size1; i++) {
    cout << array1[i] << " ";
  }
  cout << endl;

  cout << "Array 2: ";
  for (int i = 0; i < size2; i++) {
    cout << array2[i] << " ";
  }
  cout << endl;

  cout << "Merged Array: ";
  for (int i = 0; i < mergedSize; i++) {
    cout << mergedArray[i] << " ";
  }
  cout << endl;

  return 0;
}