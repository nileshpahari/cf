#include <bits/stdc++.h>
using namespace std;

int main() {
  int minSteps = 0, maxSteps = 0, n;
  int maxElement = INT_MIN;
  int minElement = INT_MAX;
  int maxPos = -1;
  int minPos = -1;
  int i = 0;
  cin >> n;
  while (i < n) {
    int height;
    cin >> height;
    if (height > maxElement) {
      maxElement = height;
      maxPos = i;
    }
    if (height <= minElement) {
      minElement = height;
      minPos = i;
    }
    i++;
  }

  if (minPos == maxPos) {
    cout << 0;
    return 0;
  }

  maxSteps = maxPos;
  if (minPos < maxPos) {
    minSteps = n - 1 - minPos - 1;
  } else {
    minSteps = n - 1 - minPos;
  }
  cout << maxSteps + minSteps;
  return 0;
}
