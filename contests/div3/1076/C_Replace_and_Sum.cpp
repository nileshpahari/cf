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
  ll n, q;
  cin >> n >> q;
  vi a(n), b(n);
  ia(a, n);
  ia(b, n);

  vi mx(n);
  for (int i = 0; i < n; ++i)
    mx[i] = max(a[i], b[i]);
  vi suf(n);
  suf[n - 1] = mx[n - 1];
  for (int i = n - 2; i >= 0; --i)
    suf[i] = max(suf[i + 1], mx[i]);
  vll prefix(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + suf[i - 1];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << " ";
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