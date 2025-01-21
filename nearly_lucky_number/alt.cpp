//GPT: simplifying using STL

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = count_if(n.begin(), n.end(), [](char c) {
        return c == '4' || c == '7';
    });

    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

