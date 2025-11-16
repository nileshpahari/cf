#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  double a, b, n;
  cin >> a >> b >> n;
  if (b==a || b<=a/n) {
    cout << 1 << nl;
  } else {
    cout << 2 << nl;
  }
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