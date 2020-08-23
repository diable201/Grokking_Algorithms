#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int count(vector<T> arr) {
    if (arr.empty()) return 0;
    arr.pop_back();
    return count(arr) + 1;
}


int main() {
    vector<int> arr = {5, 1, 2, 6, 76, 1};
    cout << count(arr) << '\n';
    return 0;
}