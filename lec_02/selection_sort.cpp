#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int *array, int size) {
   int smallest_index;
   for (int i = 0; i < size - 1; i++) {
      smallest_index = i;
      for (int j = i + 1; j < size; j++)
         if (array[j] < array[smallest_index])
            smallest_index = j;
         swap(array[i], array[smallest_index]);
      }
}

int main() {
   int n;
   cout << "Number of Elements: " << '\n';
   cin >> n;
   int arr[n];
   cout << "Elements of array" << '\n';
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   selectionSort(arr, n);
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << '\n';
   return 0;
}
