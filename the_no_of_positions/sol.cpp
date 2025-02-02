//solved by observation(no logic)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  if (b + 1 >= n - a) {
    cout << n - a;
  } else {
    cout << b + 1;
  }
  return 0;
}
