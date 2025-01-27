#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  string isMagic = "YES";
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '1' && n[i + 1] == '4' && n[i + 2] == '4') {
      i = i + 2;
    } else if (n[i] == '1' && n[i + 1] == '4') {
      i = i + 1;
    } else if (n[i] != '1') {
      isMagic="NO";
      break;
    }
  }
  cout << isMagic;
  return 0;
}
