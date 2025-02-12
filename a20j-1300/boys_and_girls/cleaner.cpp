//source: GPT

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    
    char first = (n >= m) ? 'B' : 'G';
    char second = (n >= m) ? 'G' : 'B';
    
    int minPairs = min(n, m);
    int extra = abs(n - m);

    // Print alternating pairs
    for (int i = 0; i < minPairs; i++) {
        cout << first << second;
    }

    // Print remaining extra ones
    for (int i = 0; i < extra; i++) {
        cout << first;
    }

    return 0;
}

