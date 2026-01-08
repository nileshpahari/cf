#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int total = 0;
  for (int i = 1; i < n; i++) {
    total += abs(a[i] - a[i - 1]);
  }

  int maxSavings = 0;

  maxSavings = max(maxSavings, abs(a[1] - a[0]));

  maxSavings = max(maxSavings, abs(a[n - 1] - a[n - 2]));

  for (int i = 1; i < n - 1; i++) {
    int savings =
        abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]);
    maxSavings = max(maxSavings, savings);
  }

  cout << total - maxSavings << nl;
}

int main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
