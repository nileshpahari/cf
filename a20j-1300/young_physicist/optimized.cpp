//Optimized solution by gpt


#include <bits/stdc++.h>
using namespace std;

int main() {
    int xSum = 0, ySum = 0, zSum = 0;
    int forceCount;
    cin >> forceCount;

    for (int i = 0; i < forceCount; i++) {
        int x, y, z;
        cin >> x >> y >> z; // Read input directly
        xSum += x;
        ySum += y;
        zSum += z;
    }

    // Check if net forces are zero
    if (xSum == 0 && ySum == 0 && zSum == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
