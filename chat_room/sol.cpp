#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }
        if (j == 5) break;
    }

    cout << (j == 5 ? "YES" : "NO");
    return 0;
}
