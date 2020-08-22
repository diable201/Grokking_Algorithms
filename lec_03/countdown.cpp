#include <iostream>

using namespace std;

void countdown(int number) {
    if (number < 1) {
        return;
    }
    else {
        cout << number << '\n';
        countdown(number - 1);
    }
}


int main() {
    int number;
    cin >> number;
    countdown(number);
    return 0;
}