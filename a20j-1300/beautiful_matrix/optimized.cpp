#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int r = 1; r < 6; r++) {
    for (int c = 1; c < 6; c++) {
      int n;
      cin >> n;
      if (n == 1) {
        cout << abs(3 - r) + abs(3 - c);
        break;
      }
    }
  }
  return 0;
}
