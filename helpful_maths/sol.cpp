#include <bits/stdc++.h>
using namespace std;

int main() {
  string sum, modifiedSum;
  cin >> sum;
  multiset<int> numbers;
  for (int i = 0; i < sum.length(); i = i + 2) {
    int n = sum[i] - '0';
    numbers.insert(n);
  }
  for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    modifiedSum.push_back(*it + '0');
    if (next(it) != numbers.end())
      modifiedSum.push_back('+');
  }

  cout << modifiedSum;
  return 0;
}
