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
  int m, a, b, c;
  int fr, sr, first_rem, second_rem, total = 0;
  cin >> m >> a >> b >> c;
  fr = min(m, a);
  sr = min(m, b);
  first_rem = m - fr;
  second_rem = m - sr;
  cout << fr + sr + (min(c, (first_rem + second_rem))) << '\n';
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