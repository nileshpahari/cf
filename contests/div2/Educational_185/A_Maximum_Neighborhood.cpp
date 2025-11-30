#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

int to_positive(int x) { return max(0, x); }
void solve() {
  int n;
  cin >> n;
  int maxi = 0;
  for (int i = 1; i <= n * n; i++) {
    int cnt = i;
    if (i > n)
      cnt += i - n;
    if (i < (n * n - n + 1))
      cnt += i + n;
    if (i % n != 0)
      cnt += i + 1;
    if (i % n != 1)
      cnt += i - 1;
    maxi = max(cnt, maxi);
  }
  cout << maxi << nl;
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