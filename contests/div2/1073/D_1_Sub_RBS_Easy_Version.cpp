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
  string s;
  cin >> s;
  if (s.find(")((") != string::npos) {
    cout << n - 2;
  } else {
    cout << -1;
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