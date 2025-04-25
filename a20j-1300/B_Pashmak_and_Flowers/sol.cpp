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
  long long n;
  cin >> n;
  vi flowers(n);
  int mn = INT_MAX, mx = INT_MIN;
  long long nMini = 0, nMaxi = 0;
  rep(i, 0, n) {
    cin >> flowers[i];
    if (mx < flowers[i]) {
      mx = flowers[i];
      nMaxi = 1;
    } else if (mx == flowers[i]) {
      nMaxi++;
    }
    if (mn > flowers[i]) {
      mn = flowers[i];
      nMini = 1;
    } else if (mn == flowers[i]) {
      nMini++;
    }
  }
  cout << mx - mn << " " << (mn != mx ? nMaxi * nMini : n * (n - 1) / 2);
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