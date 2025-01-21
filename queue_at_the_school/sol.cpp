#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
  int n, t;
  string str;
  cin >> n >> t >> str;
  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      // not iterating for the last element as no need to check for it
      if (str[i] == 'B' && str[i + 1] == 'G') {
        swap(str[i], str[i + 1]);
        i++;
      }
    }
  }
  cout << str;
  return 0;
}
