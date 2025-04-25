//source: gpt
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
  int n, k;
  cin >> n >> k;
  int hash[26] = {0};
  rep(i, 0, n) {
    char ch;
    cin >> ch;
    hash[ch - 'A']++;
  }
  sort(hash, hash + 26, greater<int>());
  long long sum = 0;
  for (int i = 0; i < 26 && k > 0; ++i) {
    int take = min(k, hash[i]);
    sum += 1LL * take * take;
    k -= take;
  }
  cout << sum;
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
