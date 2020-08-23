#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector<T> quicksort(const vector<T>& arr) {
    if (arr.size() < 2) 
        return arr;
    
    // recursive case
    const T* pivot = &arr.front() + arr.size() / 2 - 1; // set the pivot somewhere in the middle
    vector<T> less;  
    vector<T> greater; 
    for (const T* item = &arr.front(); item <= &arr.back(); item++) {
        if (item == pivot) continue; // skip pivot element
        if (*item <= *pivot) less.push_back(*item);
        else greater.push_back(*item);
    }
    
    vector<T> sorted_less = quicksort(less);
    vector<T> sorted_greater = quicksort(greater);
    // concatenate less part, pivot and greater part
    sorted_less.push_back(*pivot);
    sorted_less.insert(sorted_less.end(), sorted_greater.begin(), sorted_greater.end());
    
    return sorted_less;
}

int main() {
    vector<int> arr = {69, 60, 38, 82, 99, 15, 8, 94, 30, 42, 35, 40, 63, 1, 49, 66, 93, 83, 20, 32, 87, 6, 78, 17, 2, 61, 91, 25, 7, 4, 97, 31, 23, 67, 95, 47, 55, 92, 37, 59, 73, 81, 74, 41, 39};
    vector<int> sorted = quicksort(arr);
    for (auto number : sorted) {
        cout << number << " ";
    }
    cout << "\n";
    return 0;
}