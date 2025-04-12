#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<pair<int, int>> vip;

bool isPrime(long long n) {
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
void solve() {
  long long x;
  int k;
  cin >> x >> k;
  if (x > 1) {
    if (k > 1) {
      cout << "NO\n";
    } else {
      if (isPrime(x))
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  } else {
    if (k == 2) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
