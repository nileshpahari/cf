#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int l, a, b;
  cin >> l >> a >> b;
  int ptr = a;
  int ans = a;
  for (int i = 0; i <= 5000; i++) {
    ptr = (ptr + b) % l;
    ans = max(ans, ptr);
  }
  cout << ans << nl;
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