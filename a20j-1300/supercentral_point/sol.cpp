#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> coordinates;
  int counter = 0;
  while (n--) {
    int x, y;
    cin >> x >> y;
    auto coordinate = pair(x, y);
    coordinates.emplace_back(coordinate);
  }
  n = coordinates.size();

  for (int i = 0; i < n; i++) {
    int x = coordinates[i].first;
    int y = coordinates[i].second;

    int match1 = 0;
    int match2 = 0;
    int match3 = 0;
    int match4 = 0;
    for (int j = 0; j < n; j++) {
      if (match1 >= 1 && match2 >= 1 && match3 >= 1 && match4 >= 1) {
        break;
      }
      if (i == j) {
        continue;
      }
      int x1 = coordinates[j].first;
      int y1 = coordinates[j].second;

      if (x == x1 && y < y1) {
        match1++;
      }
      if (x == x1 && y > y1) {
        match2++;
      }
      if (x < x1 && y == y1) {
        match3++;
      }
      if (x > x1 && y == y1) {
        match4++;
      }
    }
    if (match1 >= 1 && match2 >= 1 && match3 >= 1 && match4 >= 1) {
      counter++;
    }
  }
  cout << counter;
  return 0;
}