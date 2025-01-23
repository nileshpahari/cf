#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int totalSurety=0, count = 0;
  while (n--) {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    totalSurety = p1+p2+p3;
    if(totalSurety>1) count++;
    totalSurety=0;
  }
  cout << count;
  return 0;
}
