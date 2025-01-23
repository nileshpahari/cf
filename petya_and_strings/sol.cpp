#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int c = 0;
  for (int i = 0; i < s1.size(); i++) {
    s1[i] = toupper(s1[i]);
    s2[i] = toupper(s2[i]);
    if (s1[i] > s2[i]) {
      c = 1;
      break;
    } else if (s1[i] < s2[i]) {
      c = -1;
      break;
    }
}
cout << c;
return 0;
}
