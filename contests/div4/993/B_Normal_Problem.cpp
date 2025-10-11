#include <algorithm>
#include <bits/stdc++.h>
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
  string s, temp;
  cin >> s;
  for (char ch : s) {
    if (ch == 'q')
      temp.push_back('p');
    else if (ch == 'p')
    temp.push_back('q');
    else
    temp.push_back(ch);
  }
  reverse(temp.begin(), temp.end());
  cout << temp << '\n';
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