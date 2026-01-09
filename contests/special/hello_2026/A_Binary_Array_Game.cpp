#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  string s = "";
  while (n--) {
    char x;
    cin >> x;
    s.push_back(x);
  }
  if (s[0] == '1' or s[s.length() - 1] == '1') {
    cout << "Alice\n";
  } else {
    cout << "Bob\n";
  }
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