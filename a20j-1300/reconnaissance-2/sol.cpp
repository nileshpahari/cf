#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> heights;

  for (int i = 0; i < n; i++) {
    int height;
    cin >> height;
    heights.push_back(height);
  }

  int a = 0, b = 0;
  int minDiff = INT_MAX;

  for (int j = 0; j < heights.size() - 1; j++) {
    int diff = abs(heights[j] - heights[j + 1]);
    if (diff < minDiff) {
      minDiff = diff;
      a = j;
      b = j + 1;
    }
  }
  if (abs(heights[heights.size() - 1] - heights[0]) < minDiff) {
    a = heights.size() - 1;
    b = 0;
  }
  cout << a + 1 << " " << b + 1;
  return 0;
}