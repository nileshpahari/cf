#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int right[n], left[n];
  int rsteps, lsteps;
  for (int i = 0; i < n; i++) {
    cin >> left[i] >> right[i];
  }
  int r1 = count(right, right + n, 1);
  int r0 = count(right, right + n, 0);
  if (r1 > r0) {
    rsteps = r0;
  } else {
    rsteps = r1;
  }
  int l1 = count(left, left + n, 1);
  int l0 = count(left, left + n, 0);
  if (l1 > l0) {
    lsteps = l0;
  } else {
    lsteps = l1;
  }
cout << rsteps+lsteps;
  return 0;
}

