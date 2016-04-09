#include <iostream>
using namespace std;


void display_array(int arr[], int n) {
  for(int i =0; i < n; i++)
      cout << arr[i] << " ";
  cout << endl;
}


void selection_sort(int a[], int n) {
  // O(n2) implementation
  // each iteration, picks the small elements in the remaining array

  for(int i = 0; i < n; i++) {
    int smallIndex = i;

    for(int j=i+1; j < n; j++) {
      if(a[j] < a[smallIndex]) {
          smallIndex = j;
      }
    }

    //swap (i, smallIndex) index elements
    int tmp = a[i];
    a[i] = a[smallIndex];
    a[smallIndex] = tmp;
  }
}

int main() {
  int arr[] = {1213, 1, 2, 5, 3, 9, 123, 33, 21, 0};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout << "Size of arr:" << sizeof(arr) << endl;
  cout << "Size of arr[0]:" << sizeof(arr[0]) << endl;
  cout << "Number of array elements :" << n << endl;

  display_array(arr, n);
  selection_sort(arr, n);
 
  cout << "Elements after sorting :" << endl;
  display_array(arr, n);

  return 0;
}

