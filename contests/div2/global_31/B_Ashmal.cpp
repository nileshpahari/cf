#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  string ans = "";
  while (n--) {
    string s;
    cin >> s;
    if (s + ans < ans + s) {
      ans = s + ans;
    } else {
      ans = ans + s;
    }
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