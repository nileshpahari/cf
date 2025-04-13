#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vip;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
  string p, s;
  cin >> p >> s;
  if (s == p) {
    cout << "YES";
    cout << nl;
    return;
  } else if (s.size() < p.size()) {
    cout << "NO";
    cout << nl;
    return;
  } else if (s.size() > 2 * p.size()) {
    cout << "NO";
    cout << nl;
    return;
  } else {
    int j = 0;
    for (int i = 0; i < p.size();) {
      if (p[i] == 'L') {
        int lp = 0;
        int ls = 0;
        while (i < p.size() && p[i] == 'L') {
          lp++;
          i++;
        }
        while (j < s.size() && s[j] == 'L') {
          ls++;
          j++;
        }
        if (ls <= 2 * lp && ls >= lp) {
          continue;
        } else {
          cout << "NO";
          cout << nl;
          return;
        }

      } else {
        int rp = 0;
        int rs = 0;
        while (i < p.size() && p[i] == 'R') {
          rp++;
          i++;
        }
        while (j < s.size() && s[j] == 'R') {
          rs++;
          j++;
        }
        if (rs <= 2 * rp && rs >= rp) {
          continue;
        } else {
          cout << "NO";
          cout << nl;
          return;
        }
      }
    }
    if (j != s.size()) {
      cout << "NO\n";
      return;
    }
    cout << "YES\n";
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