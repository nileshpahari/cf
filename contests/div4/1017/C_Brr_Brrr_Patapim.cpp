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
  int n;
  cin >> n;
  vi grid(2 * n + 1, 0);
  int sum = 0;

  for (int k = 1; k < (2 * n) + 1; k++) {
    sum += k;
  }

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      int element;
      cin >> element;
      if (!grid[i + j]) {
        grid[i + j] = element;
        sum -= element;
      }
    }
  }
  cout << sum << " ";
  for (int k = 2; k < 2 * n + 1; k++) {
    cout << grid[k] << " ";
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