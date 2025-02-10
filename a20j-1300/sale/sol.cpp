#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  vector<int> prices;
  while (n--) {
    int price;
    cin >> price;
    if (price < 0)prices.push_back(price);
  }
  sort(prices.begin(), prices.end());
  for (int i = 0; i < min(m, (int)prices.size()); i++) {
    sum += prices[i];
  }
  sum = sum * (-1);
  cout << sum;
  return 0;
}
