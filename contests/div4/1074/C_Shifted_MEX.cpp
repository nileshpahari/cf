#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (long long i = 0; i < (n); i++)                                          \
  cin >> (a)[i]

#define ll long long

#define nl '\n'

long long mex(vector<long long> &a) {
  long long n = a.size();
  vector<bool> seen(n + 1, false);
  for (long long x : a)
    if (0 <= x && x <= n)
      seen[x] = true;
  for (long long i = 0; i <= n; i++)
    if (!seen[i])
      return i;
  return n + 1;
}

void solve() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  ia(a, n);
  long long ans = mex(a);
  for (int i = 0; i < n; i++) {
    long long x = a[i];
    auto b = a;
    for (int j = 0; j < n; j++) {
      if (x < 0) {
        b[j] = b[j] - x;
      } else {
        b[j] = b[j] - x;
      }
    }
    ans = max(ans, mex(b));
  }
  cout << ans << nl;
}

int main() {
  fastio();
  long long t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
