#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (s.find("2026") != string::npos || s.find("2025") == string::npos) {
    cout << 0;
  } else {
    cout << 1;
  }
  cout << nl;
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
