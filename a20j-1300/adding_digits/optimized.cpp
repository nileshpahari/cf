// source: gpt
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    long long lengthened = a;
    bool possible = false;

    for (int i = 0; i < 10; i++) {
        if ((lengthened * 10 + i) % b == 0) {
            lengthened = lengthened * 10 + i;
            possible = true;
            break;
        }
    }

    if (!possible) {
        cout << -1;
        return 0;
    }

    cout << lengthened;
    while (--n) cout << 0;  // Append (n-1) zeros
    return 0;
}
