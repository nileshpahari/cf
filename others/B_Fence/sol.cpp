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
  int n, k;
  cin >> n >> k;
  vi fences;
  int sum = 0;
  rep(i, 0, n) {
    int element;
    cin >> element;
    fences.pb(element);
    if (i < k) {
      sum += element;
    }
  }
  

  int index = k-1;
  int minSum = sum;
  int p1 = 0;
  rep(j, k, n) {
    sum = sum - fences[p1] + fences[j];

    if (sum < minSum) {
      minSum = sum;
      index = j;
    }
    p1++;
  }

  cout << index+2-k;
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
