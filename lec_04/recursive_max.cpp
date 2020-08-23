#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T max_recursive(std::vector<T> arr) {
    if (arr.empty()) return 0;
    if (arr.size() == 1) return arr.at(0);

    T back = arr.back();
    arr.pop_back();

    T sub_max = max_recursive(arr);
    if (back > sub_max)
        return back;
    else
        return sub_max;
}

int main() {
    vector<int> positive_array = {1, 5, 10, 25, 16, 1};
    cout << max_recursive(positive_array) << "\n";
    vector<int> array = {7};
    cout << max_recursive(array) << "\n";
    vector<int> negative_array = {-1, -5, -10, -25, -16};
    cout << max_recursive(negative_array) << "\n";
}