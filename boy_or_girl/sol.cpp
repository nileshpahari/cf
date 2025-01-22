#include <bits/stdc++.h>
using namespace std;

int main() {
  int female = 0;
  string username;
  cin >> username;
  set<char> distinctChars(username.begin(), username.end());
  if (distinctChars.size() % 2)
    cout << "IGNORE HIM!";
  else
    cout << "CHAT WITH HER!";
  return 0;
}
