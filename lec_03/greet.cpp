#include <iostream>

using namespace std;

void mood(string name) {
    cout << "How are you, " + name + "?" << "\n";     
}


void bye() {
    cout << "See you soon!" << "\n";
}


void greet(string name) {
    cout << "Hello, " + name + "!" << "\n";
    mood(name);
    cout << "It's time to say goodbye..." << "\n";
    bye();
}


int main() {
    string name;
    cin >> name;
    greet(name);
    return 0;
}