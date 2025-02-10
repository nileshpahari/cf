// O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int oddCount = (n + 1) / 2;  // Total number of odd numbers

    if (k <= oddCount) {
        cout << (2 * k - 1);  // k-th odd number
    } else {
        cout << (2 * (k - oddCount));  // (k - oddCount)-th even number
    }

    return 0;
}
