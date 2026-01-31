#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (int i = 0; i < (n); i++)                                                \
  cin >> (a)[i]

typedef long long ll;
typedef vector<ll> vi;
typedef vector<ll> vll;
typedef pair<ll, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'

void solve() {
  ll n;
  cin >> n;
  vll a(n);
  ll mn = INT_MAX, mx = INT_MIN;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  if (is_sorted(a.begin(), a.end())) {
    cout << -1 << nl;
    return;
  }

  vll b = a;
  sort(b.begin(), b.end());
  ll low = 1, high = mx - mn;
  ll ans = 0;
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    ll start = mx - mid;
    ll end = mn + mid;
    bool flag = true;
    if (start < end) {
      for (int i = 0; i < n; ++i) {
        if (a[i] > start and a[i] < end and a[i] != b[i]) {
          flag = false;
          break;
        }
      }
    }
    if (flag) {
      ans = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }


  cout << ans << nl;
}

int main() {
  fastio();
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}