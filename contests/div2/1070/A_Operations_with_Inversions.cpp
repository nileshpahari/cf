#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  int maxi = INT_MIN;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x < maxi) {
      ans++;
    }
    maxi = max(x, maxi);
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