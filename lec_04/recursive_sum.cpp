#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T recursive_sum(vector<T> arr) {
    if (arr.empty()) return 0;
    T last_num = arr.back();
    arr.pop_back();
    return last_num + recursive_sum(arr);
}


int main() {
    vector<int> arr_int = {1, 4, 2, 5, 7};
    cout << recursive_sum(arr_int) << "\n";
    return 0;
}