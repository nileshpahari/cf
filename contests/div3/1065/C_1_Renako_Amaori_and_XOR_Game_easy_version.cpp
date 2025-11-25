#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  int n1 = 0, n2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 1) {
      n1++;
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if (b[i] == 1) {
      n2++;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0 && n1 % 2 == 0) {
      if (a[i - 1] == 0 && b[i - 1] == 1) {
        n1++;
        n2--;
      } else if (a[i - 1] == 1 && b[i - 1] == 0) {
        n1--;
        n2++;
      }
    } else if (i % 2 == 0 && n2 % 2 == 0) {
      if (b[i - 1] == 0 && a[i - 1] == 1) {
        n2++;
        n1--;
      } else if (b[i - 1] == 1 && a[i - 1] == 0) {
        n2--;
        n1++;
      }
    }
  }
  bool odd1 = n1 & 1;
  bool odd2 = n2 & 1;
  if (odd1 && !odd2) {
    cout << "Ajisai";
  } else if (!odd1 && odd2) {
    cout << "Mai";
  } else {
    cout << "Tie";
  }
  //   cout << n1 << " " << n2;

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
