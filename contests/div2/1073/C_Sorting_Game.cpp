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
  int c0 = 0;
  string s;
  for (int i = 1; i <= n; ++i) {
    char x;
    cin >> x;
    s.push_back(x);
    if (x == '0') {
      c0++;
    }
  }
  if (is_sorted(s.begin(), s.end())) {
    cout << "Bob\n";
    return;
  }
  vector<int> a;
  for (int i = 0; i < c0; i++) {
    if (s[i] == '1')
      a.push_back(i + 1);
  }
  for (int i = c0; i < n; i++) {
    if (s[i] == '0')
      a.push_back(i + 1);
  }
  cout << "Alice\n";
  cout << a.size() << nl;
  for (int x : a) {
    cout << x << " ";
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