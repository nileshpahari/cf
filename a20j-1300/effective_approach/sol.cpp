#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  long long vApproach=0, pArroach=0;
  cin >> n;
  vector<int> hash(n + 1, 0);
  int i = 1;
  while (n--) {
    int element;
    cin >> element;
    hash[element] = i;
    i++;
  }
  cin >> m;
 
  while (m--) {
    int finder;
    cin >> finder;
    vApproach += hash[finder];
    pArroach += i - hash[finder];
  }
  cout << vApproach << " " << pArroach;
  return 0;
}
