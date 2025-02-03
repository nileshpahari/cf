// Sol 1: TLE O(n), complexity
 #include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  int c = 0;
  for (int i = 1; i <= n; i = i + 2) {
    c++;
    if (c == k) {
      cout << i;
      return 0;
    }
  }
  for (int j = 2; j <= n; j = j + 2) {
    c++;
    if (c == k) {
      cout << j;
      return 0;
    }
  }
  return 0;
}

/*
 Sol 2: also failed due to TLE


#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int c;
  if (n % 2 == 0) {
    if (k <= n / 2) {
      c = 0;
      for (int i = 1; i <= n; i = i + 2) {
        c++;
        if (c == k) {
          cout << i;
          return 0;
        }
      }

    } else {
      c = n / 2;
      for (int j = 2; j <= n; j = j + 2) {
        c++;
        if (c == k) {
          cout << j;
          return 0;
        }
      }
    }
  } else {
    c = 0;
    if (k <= (n + 1) / 2) {
      for (int i = 1; i <= n; i = i + 2) {
        c++;
        if (c == k) {
          cout << i;
          return 0;
        }
      }
    } else {
      c = (n + 1) / 2;
      for (int j = 2; j <= n; j = j + 2) {
        c++;
        if (c == k) {
          cout << j;
          return 0;
        }
      }
    }
  }
  return 0;
}
*/
