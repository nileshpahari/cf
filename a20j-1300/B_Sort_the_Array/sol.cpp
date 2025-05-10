// source: gpt
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
  int n;
  cin >> n;
  vi arr(n);
  rep(i, 0, n) cin >> arr[i];
  auto sortedArr = arr;
  sort(sortedArr.begin(), sortedArr.end());
  int l = 0, r = n - 1;
  while (l < n && arr[l] == sortedArr[l])
    l++;
  while (r > 0 && arr[r] == sortedArr[r])
    r--;
  if(l>=r) {cout << "yes\n" << 1<< " " << 1; return;}
  reverse(arr.begin()+l, arr.begin()+r+1);
  if (sortedArr == arr)
    cout << "yes\n" << l + 1<< " " << r + 1;
  else cout << "no";
}

int main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

