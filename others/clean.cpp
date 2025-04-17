//source: gpt
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
typedef vector<int> vi;

void solve() {
  int n, k;
  cin >> n >> k;
  vi h(n);
  for (int i = 0; i < n; ++i) cin >> h[i];

  int sum = 0;
  for (int i = 0; i < k; ++i) sum += h[i];

  int minSum = sum, index = 0;
  for (int i = k; i < n; ++i) {
    sum += h[i] - h[i - k];
    if (sum < minSum) {
      minSum = sum;
      index = i - k + 1;
    }
  }

  cout << index + 1 << '\n';  // 1-based index
}

int main() {
  fastio();
  solve();
  return 0;
}
