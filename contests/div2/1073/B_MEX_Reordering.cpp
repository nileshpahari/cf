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

void solve() {
  int n;
  cin >> n;
  vector<int> freq(n + 2, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq[x]++;
  }
  int mex = 0;
  while (freq[mex] > 0)
    mex++;
  if (mex == 0 || (mex == 1 && freq[0] >= 2)) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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
