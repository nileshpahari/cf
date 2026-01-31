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
  string s;
  cin >> s;
  vi a;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      a.push_back(i);
    }
  }
  int ans = a.size();
  if (ans == 0) {
    cout << (n + 2) / 3 << nl;
    return;
  }

  int start = a[0];
  int end = n - 1 - a.back();
  ans += max(0, (start + 1) / 3);
  ans += max(0, (end + 1) / 3);

  for (int i = 1; i < (int)a.size(); i++) {
    int x = a[i] - a[i - 1] - 1;
    ans += max(0, x / 3);
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