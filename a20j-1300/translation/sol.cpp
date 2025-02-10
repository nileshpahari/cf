#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int length = s.length();
  if(length!=t.length()) {
    cout << "NO";
    return 0;
  }
  for(int i=0; i<(int)(length); i++){
    if(s[i]!=t[length-1-i]) {
        cout << "NO";
        return 0;
    }
  }
  cout << "YES";
  return 0;
}
