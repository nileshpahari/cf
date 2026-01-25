#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (int i = 0; i < (n); i++)                                                \
  cin >> (a)[i]

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vll a(n), b(n);
  ia(a, n);
  ia(b, n);

  vll prefix(n + 1);
  prefix[0] = 0;
  for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + b[i];
  }
  vll v = a;
  sort(v.begin(), v.end());
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll x = v[i];
    ll swords_available = n - i;
    int l = upper_bound(prefix.begin(), prefix.end(), swords_available) -
            prefix.begin() - 1;
    ll s = x * l;
    ans = max(ans, s);
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