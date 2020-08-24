#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> phoneBook = {
        {"Jenny", 876453},
        {"Emergency", 911}
    };

void check_phone(const string &name) {
    unordered_map<string, int> :: iterator it;
    it = phoneBook.find(name); 
        cout << it->second << '\n';
}


int main() {
    string name;
    cin >> name;
    check_phone(name);
}