#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  while (n--) {
    string operation;
    cin >> operation;
    if (operation == "++X" || operation == "X++")
      count++;
    else
      count--;
  }
  cout << count;
  return 0;
}
