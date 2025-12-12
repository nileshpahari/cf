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
  int cnt = 0, ans = 0, first = INT_MAX, last = INT_MIN;
  for (int i = 1; i <= n; i++) {
    char ch = s[i - 1];
    if (ch == '0') {
      cnt++;
    } else {
      first = min(first, i);
      last = max(last, i);
      cnt = 0;
    }
    ans = max(ans, cnt);
  }
  if (first != 1) {
    ans = max(n - last + first - 1, ans);
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