#include <iostream>

using namespace std;

double factorial(double number) {
    if (number == 0)
        return 1;
    else if (number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}


int main() {
    double number;
    cin >> number;
    cout << factorial(number) << "\n";
    return 0;
}