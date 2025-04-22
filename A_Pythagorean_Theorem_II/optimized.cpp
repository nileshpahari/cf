//source: yt
#include <bits/stdc++.h>
#include <cmath>
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
  int n;
  cin >> n;
  int count = 0;
  rep(c, 1, n + 1) {
    rep(b, 1, c) {
      int a2 = c * c - b * b;
      int a = sqrt(a2);
      if (a * a == a2 && a <= b && a >= 1) {
        count++;
      }
    }
  }
  cout << count;
}

int main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
