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
  ll n, s, x;
  cin >> n >> s >> x;
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    sum += ai;
  }
  if (sum == s) {
    cout << "YES\n";
  } else if (sum > s) {
    cout << "NO\n";
  } else {
    cout << ((s - sum) % x == 0 ? "YES\n" : "NO\n");
  }
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