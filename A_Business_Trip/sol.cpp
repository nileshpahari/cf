#include <bits/stdc++.h>
#include <functional>
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
  vi months(12, 0);
  int sum = 0;
  rep(i, 0, 12) {
    cin >> months[i];
    sum += months[i];
  }
  if (sum < n) {
    cout << -1;
  } else {
    int i = 0;
    sort(months.begin(), months.end(), greater<int>());
    while (n > 0) {
      n -= months[i];
      i++;
    }
    cout << i;
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
