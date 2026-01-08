#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int cur = (1 << n) - 1;
  cout << cur << " ";

  for (int i = n - 1; i >= 0; i--) {
    cur ^= (1 << i);
    cout << cur << " ";
    vector<int> a;
    for (int j = i + 1; j < n; j++) {
      a.push_back(j);
    }
    int m = (1 << a.size());
    for (int j = 1; j < m; j++) {
      int x = cur;
      for (int k = 0; k < (int)a.size(); k++) {
        if ((j >> k) & 1) {
          x ^= (1 << a[k]);
        }
      }
      cout << x << " ";
    }
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
