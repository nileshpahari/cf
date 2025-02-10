#include <bits/stdc++.h>
using namespace std;

int main() {
  int c1, c2, c3, c4, count = 0;
  cin >> c1 >> c2 >> c3 >> c4;
  if (c1 == c2 || c1 == c3 || c1 == c4)
    count++;
  if (c2 == c3 || c2 == c4)
    count++;
  if (c3 == c4)
    count++;
  cout << count;
  return 0;
}
