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
  int x = n;
  int n1 = 0, n0 = 0;
  while (x--) {
    char ch;
    cin >> ch;
    if (ch == '1')
      n1++;
    else
      n0++;
  }
  cout << n0 * (n1 + 1) + n1 * (n1 - 1);
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