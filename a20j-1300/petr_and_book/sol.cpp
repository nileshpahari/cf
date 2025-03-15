#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = n;
  int mon;
  int tue;
  int wed;
  int thurs;
  int fri;
  int sat;
  int sun;
  cin >> mon >> tue >> wed >> thurs >> fri >> sat >> sun;
  while (total) {
    total -= mon;
    if (total < 1) {
      cout << 1;
      break;
    }
    total -= tue;
    if (total < 1) {
      cout << 2;
      break;
    }
    total -= wed;
    if (total < 1) {
      cout << 3;
      break;
    }
    total -= thurs;
    if (total < 1) {
      cout << 4;
      break;
    }
    total -= fri;
    if (total < 1) {
      cout << 5;
      break;
    }
    total -= sat;
    if (total < 1) {
      cout << 6;
      break;
    }
    total -= sun;
    if (total < 1) {
      cout << 7;
      break;
    }
  }
  return 0;
}