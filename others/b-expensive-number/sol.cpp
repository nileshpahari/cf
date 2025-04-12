#include <bits/stdc++.h>
#include <string>
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
  string s;
  cin >> s;
  int n = s.size();
  int remove = 0;
  int Ans = n - 1;
  rep(i, 0, n) {
    if (s[i] != '0') {
      Ans = remove + n - i - 1;
      remove++;
    }
  }
  cout << Ans << nl;
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
