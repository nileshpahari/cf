#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (int i = 0; i < (n); i++)                                                \
  cin >> (a)[i]

#define ll long long

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  int mx = INT_MIN;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    mx = max(mx, x);
  }
  cout << mx * n << nl;
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
