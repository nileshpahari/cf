//source: YT
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
  cin >> n >> m;
  multiset<int> mini;
  multiset<int, greater<int>> maxi;
  int maxEarn = 0, minEarn = 0;
  rep(i, 0, m) {
    int price;
    cin >> price;
    mini.insert(price);
    maxi.insert(price);
  }
  rep(i, 0, n) {
    int price = *maxi.begin();
    maxEarn += price;
    maxi.erase(maxi.lower_bound(price));
    price--;
    if (price > 0)
      maxi.insert(price);
  }
  int i = 0;
  rep(i, 0, n) {
    int price = *mini.begin();
    minEarn += price;
    mini.erase(mini.lower_bound(price));
    price--;
    if (price > 0) {
      mini.insert(price);
    }
  }
  cout << maxEarn << " " << minEarn;
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
