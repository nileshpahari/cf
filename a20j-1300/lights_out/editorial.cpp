#include <bits/stdc++.h>
using namespace std;

int main() {
  int lights[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> lights[i][j];
    }
  }
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      int toggle = lights[r][c];
      if (r > 0)
        toggle += lights[r - 1][c];
      if (r < 2)
        toggle += lights[r + 1][c];
      if (c > 0)
        toggle += lights[r][c - 1];
      if (c < 2)
        toggle += lights[r][c + 1];
      cout << ((toggle % 2) ? "0" : "1");
    }
    cout << '\n';
  }
  return 0;
}
