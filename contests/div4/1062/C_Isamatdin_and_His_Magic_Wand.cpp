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
  vector<long long> a(n);
  bool hasOdd = false, hasEven = false;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] & 1) hasOdd = true; else hasEven = true;
  }

  if (hasOdd && hasEven) sort(a.begin(), a.end());

  for (int i = 0; i < n; ++i) {
    cout << a[i] << (i + 1 == n ? '\n' : ' ');
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