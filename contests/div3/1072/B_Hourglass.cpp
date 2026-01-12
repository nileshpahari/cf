#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  long long s, k, m;
  cin >> s >> k >> m;
  long long rem = m % k;
  long long n_flips = m / k;
  long long fallen = min(s, k);
  if (n_flips & 1) {
    fallen = min(s, k);
  } else {
    fallen = s;
  }
  if (rem >= fallen) {
    cout << 0;
  } else {
    cout << fallen - rem;
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