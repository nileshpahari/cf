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
  int n;
  cin >> n;
  vector<int> a(n), pos(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    pos[a[i]] = i;
  }

  for (int v = 2; v <= n; v++) {
    if ((pos[v] & 1) == (pos[v - 1] & 1)) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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