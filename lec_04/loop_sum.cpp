#include <iostream>

using namespace std;

int loop_sum(int number) {
    int arr[number];
    int sum = 0;
    for (int i = 0; i < number; i++)
        cin >> arr[i];
    for (int i = 0; i < number; i++)
        sum += arr[i];
    return sum;
}


int main() {
    int number;
    cin >> number;
    cout << loop_sum(number) << '\n';
    return 0;
}