#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, float> book = {
        {"apple", 0.67},
        {"milk", 1.49},
        {"pineapple", 1.49}
    };

    for (pair<string, float> pair : book) {
        cout << pair.first << ": " << pair.second << "$" << '\n';
    }
}