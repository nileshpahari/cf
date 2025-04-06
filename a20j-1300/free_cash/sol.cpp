#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> arrivalTime;
  int count = 1;
  int reqCash = 1;

  for (int i = 0; i < n; i++) {
    int hi, mi;
    cin >> hi >> mi;
    pair<int, int> temp = {hi, mi};
    arrivalTime.emplace_back(temp);
    if (i == 0)
      continue;
    if (arrivalTime[i - 1] == arrivalTime[i]) {
      count++;
    } else {
      reqCash = max(reqCash, count);
      count = 1;
    }
  }
  reqCash = max(reqCash, count);
  cout << reqCash;
  return 0;
}
