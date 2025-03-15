#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int a = 0; a <= n; a++) {
    int s = n - a;
    while (s--) {
      cout << " " << " ";
    }
    if (a == 0) {
      cout << 0;
    } else {
      int j;
      for (j = 0; j <= a; j++) {
        cout << j << " ";
      }
      for (int k = j - 2; k > 0; k--) {
        cout << k << " ";
      }
      cout << 0;
    }
    cout << '\n';
  }

  for (int b = n - 1; b >= 0; b--) {
    int s = n - b;
    while (s--) {
      cout << " " << " ";
    }
    if (b == 0) {
      cout << 0;
    } else {
      int j;
      for (j = 0; j <= b; j++) {
        cout << j << " ";
      }
      for (int k = j - 2; k > 0; k--) {
        cout << k << " ";
      }
      cout << 0;
    }
    cout << '\n';
  }
  return 0;
}