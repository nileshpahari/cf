#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve(int t) {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  long long cur = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    long long X = ans - a[i];
    long long Y = b[i] - ans;
    if (i != n - 1) {
      long long A1 = X - a[i + 1];
      long long A2 = b[i + 1] - X;
      long long B1 = Y - a[i + 1];
      long long B2 = b[i + 1] - Y;
      long long temp = max(max(A1, A2), max(B1, B2));
      if (temp == A1 || temp == A2) {
        ans = X;
      } else {
        ans = Y;
      }
    } else {
      ans = max(X, Y);
    }
  }
  cout << ans << nl;
}

int main() {
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve(t);
  }
  return 0;
}