
#include <iostream>
#include <string>
using namespace std;

int main() {
    string borze;
    cin >> borze;

    for (size_t i = 0; i < borze.length(); ++i) {
        if (borze[i] == '.') {
            cout << 0;
        } else if (borze[i] == '-' && borze[i + 1] == '.') {
            cout << 1;
            ++i; // Skip the next character as it's already processed
        } else if (borze[i] == '-' && borze[i + 1] == '-') {
            cout << 2;
            ++i; // Skip the next character as it's already processed
        }
    }
    
    return 0;
}
