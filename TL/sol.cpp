#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int minWrong = INT_MAX;
  int minRight = INT_MAX;
  int maxRight = INT_MIN;
  while (n--) {
    int an;
    cin >> an;
    minRight = min(an, minRight);
    maxRight = max(an, maxRight);
  }
  while (m--) {
    int am;
    cin >> am;
    minWrong= min(am, minWrong);
  }
  int v = max(2 * minRight, maxRight);
  if (v < minWrong)
    cout << v;
  else
    cout << -1;
  return 0;
}
