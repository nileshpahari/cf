#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (int i = 0; i < (n); i++)                                                \
  cin >> (a)[i]

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  int mid = (n + 1) / 2;
  for (int i = 1; i <= n; i++) {
    if (i & 1) {
      cout << mid - (i - 1) / 2 << " ";
    } else {
      cout << mid + i / 2 << " ";
    }
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