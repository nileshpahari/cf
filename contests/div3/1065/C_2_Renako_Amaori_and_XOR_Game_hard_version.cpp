
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
  long long n1 = 0, n2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    n1 = n1 ^ a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    n2 = n2 ^ b[i];
  }
  for (int i = 1; i <= n; i++) {
    long long temp1 = n1 ^ a[i - 1] ^ b[i - 1];
    long long temp2 = n2 ^ b[i - 1] ^ a[i - 1];
    long long diff1 = n1 - n2;
    long long diff2 = temp1 - temp2;
    if (i % 2 != 0) {
      if (diff2 > diff1) {
        n1 = temp1;
        n2 = temp2;
      }
    } else {
      if (diff2 < diff1) {
        n1 = temp1;
        n2 = temp2;
      }
    }
  }
  if (n1 > n2) {
    cout << "Ajisai";
  } else if (n2 > n1) {
    cout << "Mai";
  } else {
    cout << "Tie";
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