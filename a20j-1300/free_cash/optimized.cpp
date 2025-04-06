#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int maxCash = 1, count = 1;
  int ph = -1, pm = -1;
  for (int i = 1; i <= n; i++) {
    int h, m;
    cin >> h >> m;
    if (h == ph && m == pm) {
      count++;
    } else {
      count=1;  
      ph = h;
      pm = m;
    }
    maxCash = max(count, maxCash);
  }
  cout << maxCash;
}
