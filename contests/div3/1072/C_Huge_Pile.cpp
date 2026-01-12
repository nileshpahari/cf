 <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  long long n, k;
  cin >> n >> k;
  long long ans = 0;
  if (n == k) {
    cout << 0 << nl;
    return;
  } else if (k > n) {
    cout << -1 << nl;
    return;
  }
  set<long long> s;
  s.insert(n);
  while (!s.empty()) {
    ans++;
    set<long long> new_elements;
    for (auto it = s.begin(); it != s.end(); it++) {
      long long a = *it / 2;
      long long b = (*it + 1) / 2;
      if (a == k or b == k) {
        cout << ans << nl;
        return;
      } else {
        if (a > k) {
          new_elements.insert(a);
        }
        if (b > k) {
          new_elements.insert(b);
        }
      }
    }
    s = new_elements;
  }
  cout << -1 << nl;
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