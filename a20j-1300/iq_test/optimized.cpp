#include <bits/stdc++.h>
using namespace std;

int main() {
  char grid[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> grid[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int dot = 0, hash = 0;
      for (int dx = 0; dx < 2; dx++) {
        for (int dy = 0; dy < 2; dy++) {
          if (grid[i + dx][j + dy] == '.')
            dot++;
          else
            hash++;
        }
      }
      if (dot >= 3 || hash >= 3) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
