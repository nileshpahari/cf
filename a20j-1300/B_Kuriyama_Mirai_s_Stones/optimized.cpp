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
  int n, m;
  cin >> n;
  vi stones(n);

  vll prefix(n);
  vll sortedPrefix(n);

  rep(i, 0, n) {
    cin >> stones[i];
    if (i != 0) {
      prefix[i] = prefix[i - 1] + stones[i];
    } else {
      prefix[i] = stones[i];
    }
  }

  vi sortedStones = stones;
  sort(sortedStones.begin(), sortedStones.end());
  sortedPrefix[0] = sortedStones[0];
  rep(i, 1, n) { sortedPrefix[i] = sortedPrefix[i - 1] + sortedStones[i]; }
  cin >> m;
  while (m--) {
    long long sum = 0;
    int type, l, r;
    cin >> type >> l >> r;
    --l, --r;
    if (type == 1) {
      if (l == 0) {
        sum = prefix[r];
      } else {
        sum = prefix[r] - prefix[l - 1];
      }
    } else {
      if (l == 0) {
        sum = sortedPrefix[r];
      } else {
        sum = sortedPrefix[r] - sortedPrefix[l - 1];
      }
    }
    cout << sum << nl;
  }
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