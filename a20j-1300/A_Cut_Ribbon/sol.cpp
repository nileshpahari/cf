#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vip;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  int x, y, z, zc, ans=0;
  for (x = 0; x*a<=n; x++) {
    for (y = 0; a * x + b * y <= n; y++) {
      zc = n - x * a - y * b;
      if (zc % c == 0) {
        z = zc / c;
        ans = max(ans, x + y + z);
      }
    }
  }
  cout << ans;
}

int main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}