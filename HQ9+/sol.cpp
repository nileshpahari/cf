#include <bits/stdc++.h>
using namespace std;

int main() {
  string program;
  cin >> program;
  for (char ch : program) {
    if (ch == 'H' || ch == 'Q' || ch == '9') {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
