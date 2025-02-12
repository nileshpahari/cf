#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, m;
  cin >> n >> m;
  int d = abs(n - m);
  if (m >= n) {
    for (int i = 1; i < n + 1; i++) {
      cout << "GB";
    }
    while (d--) {
      cout << 'G';
    }
  } else {
    for (int i = 1; i < m + 1; i++) {
      cout << "BG";
    }
    while (d--) {
      cout << 'B';
    }
  }

  return 0;
}
