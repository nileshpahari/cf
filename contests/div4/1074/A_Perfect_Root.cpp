#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define ia(a, n)                                                               \
  for (int i = 0; i < (n); i++)                                                \
  cin >> (a)[i]

#define ll long long

#define nl '\n'

vector<int> a = {1,   4,   9,   16,  25,  36,  49,  64,  81,
                 100, 121, 144, 169, 196, 225, 256, 289, 324,
                 361, 400, 441, 484, 529, 576, 625};

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
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