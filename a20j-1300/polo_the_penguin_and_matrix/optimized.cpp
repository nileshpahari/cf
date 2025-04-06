#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<pair<int, int>> vip;

int main() {
  int n, m, d;
  cin >> n >> m >> d;
  vi elements;
  int constant = 0;
  for (int i = 0; i < n * m; i++) {
    int element;
    cin >> element;
    elements.push_back(element);
    if (i == 0) {
      constant = element % d;
    } else if (element % d != constant) {
      cout << -1;
      return 0;
    }
  }

  sort(elements.begin(), elements.end());
  int median = elements[elements.size() / 2];
  int nOperations = 0;
  for (int j = 0; j < n * m; j++) {
    nOperations += (abs(elements[j] - median)) / d;
  }
  cout << nOperations;
  return 0;
}
