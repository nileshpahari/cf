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
  vector<int> a(n);
  ia(a, n);
  int l = -1, r = -1;

  for (int i = 0; i < n; i++) {
    int k = n - i;
    if (a[i] != k) {
      l = i;
      for (int j = i; j < n; j++) {
        if (a[j] == k) {
          r = j;
          break;
        }
      }
      break;
    }
  }
  if (l != -1)
    reverse(a.begin() + l, a.begin() + r + 1);
  for (int x : a)
    cout << x << " ";
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