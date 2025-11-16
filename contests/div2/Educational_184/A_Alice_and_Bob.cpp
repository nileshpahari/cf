#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, a;
  cin >> n >> a;
  int greater = 0, smaller = 0;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp > a) {
      greater++;
    } else if (temp < a) {
      smaller++;
    }
  }
  if (greater > smaller) {
    cout << a + 1 << nl;
  } else {
    cout << a - 1 << nl;
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