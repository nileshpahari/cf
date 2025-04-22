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
  int index = n;
  int times = 1;
  rep(i, 0, n) {
    int candies;
    cin >> candies;
    int multiple = (candies+m-1)/m;
    if (multiple>= times) {
      times = multiple;
      index = i + 1;
    }
  }
  cout << index ;
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