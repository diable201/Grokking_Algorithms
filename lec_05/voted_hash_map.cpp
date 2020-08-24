#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, bool> voted;

void check_voter(const string &name) {
    auto search = voted.find(name);
    if (search == voted.end() || search->second == false) {
        voted.insert({name, true});
        cout << "Let them vote!" << '\n';
    } else {
        cout << "Already voted" << '\n';
    }
}

int main() {
    check_voter("Tom");
    check_voter("Alice");
    check_voter("Alice");
}