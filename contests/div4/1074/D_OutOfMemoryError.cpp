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
  ll n, m, h;
  cin >> n >> m >> h;
  vector<ll> a(n);
  ia(a, n);

  map<ll, ll> op;

  for (int i = 0; i < m; ++i) {
    ll b, c;
    cin >> b >> c;
    if (a[b - 1] + op[b - 1] + c > h) {
      op.clear();
    } else {
      op[b - 1] += c;
    }
  }
  for (auto [b, c] : op) {
    a[b] += c;
  }

  for (auto x : a) {
    cout << x << " ";
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
