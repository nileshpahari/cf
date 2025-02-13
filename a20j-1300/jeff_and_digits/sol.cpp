#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0, n5 = 0, n0 = 0;
  cin >> n;
  while (n--) {
    int card;
    cin >> card;
    if (card == 0)
      n0++;
    else
      n5++;
  }

  if (n0 < 1) {
    cout << -1;
    return 0;
  }

  sum = n5 * 5;

  while (sum % 9 != 0 && sum>=45) {
    sum -= 5;
    n5--;
  }

  if (sum % 9 == 0 && sum!=0) {
    while (n5--) {
      cout << 5;
    }
    while (n0--) {
      cout << 0;
    }
  } else {
    cout << 0;
  }

  return 0;
}
