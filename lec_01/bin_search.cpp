#include <iostream>
using namespace std;

void BinarySearch(int data_array[], int element, int len) {
    int low = 0;
    int high = len;
    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = data_array[mid];
        if (guess == element) {
            cout << "Element found at " << mid << " index" << '\n';
            return ;
        }
        else if (guess > element)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Element doesn't exist" << '\n';
    return ;
}

int main() {
    int data_array[] = {1, 2, 3, 4, 5};
    int length = sizeof(data_array) / sizeof(int);
    BinarySearch(data_array, 6, length);
    return 0;
}