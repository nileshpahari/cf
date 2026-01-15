#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int a, b;
  cin >> a >> b;
  long long Odd = 0, Even = 1;
  int i = 1;
  int ans = 0;
  while ((a >= Odd && b >= Even) || (b >= Odd && a >= Even)) {
    if (i & 1) {
      Odd += (1LL << i);
    } else {
      Even += (1LL << i);
    }
    i++;
    ans++;
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
