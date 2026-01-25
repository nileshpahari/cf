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
  set<int> s;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  vi a(s.begin(), s.end());
  vi ans(n + 1, -1);
  queue<int> q;
  for (int x : a) {
    ans[x] = 1;
    q.push(x);
  }
  while (!q.empty()) {
    ll p = q.front();
    q.pop();
    for (auto x : a) {
      if (x == 1)
        continue;
      ll next = p * x;
      if (next > n)
        break;
      if (ans[next] == -1) {
        ans[next] = ans[p] + 1;
        q.push(next);
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
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