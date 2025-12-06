#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  int skip = 0;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    if (x == '1') {
      skip = k;
    } else if (skip <= 0) {
      cnt++;
    } else {
      skip--;
    }
  }
  cout << cnt << nl;
}

int main() {
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}