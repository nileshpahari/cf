#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int n, k;
  cin >> n >> k;
  vi a(n), b(n);
  int mx=INT_MIN;
  int mn=INT_MAX;
  rep(i, 0, n) {
    cin >> a[i];
    mx = max(mx, a[i]);
    mn = min(mn, a[i]);
  }
  rep(i, 0, n) cin >> b[i];
  int x = -1;
  bool possible = true;
  rep(i, 0, n) {
    if (b[i] != -1) {
      int current = a[i] + b[i];
      if (x == -1) {
        x = current;
      } else if (current != x) {
        possible = false;
        break;
      }
    }
  }

  if (!possible) {
    cout << 0 << '\n';
    return;
  }

  if (x == -1) {
    if (mx > mn+k) {
      cout << 0 << '\n';
    } else {
      cout << upper - lower + 1 << '\n';
    }
  } else {
    possible = true;
    rep(i, 0, n) {
      if (b[i] == -1) {
        int bi = x - a[i];
        if (bi < 0 || bi > k) {
          possible = false;
          break;
        }
      }
    }
    if (possible) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
}

int main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}