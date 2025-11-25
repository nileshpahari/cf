#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

bool is_valid(vector<int> a, int d) {
  for (int i = 0; i < (int)a.size() - 1; i += 2) {
    int diff = a[i + 1] - a[i];
    if (diff > d)
      return false;
  }
  return true;
}
void solve() {
  int n, d;
  cin >> n >> d;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  bool ans = false;
  if (n & 1) {
    for (int i = 0; i < n; i++) {
      vector<int> cp = a;
      cp.erase(cp.begin() + i);
      ans = ans || is_valid(cp, d);
    }
  } else {
    ans = is_valid(a, d);
  }
  cout << (ans ? "YES\n" : "NO\n");
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