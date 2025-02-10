#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      if (n / i != i)
        count++;
    };
  }
  if (count > 2)
    return false;
  return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  if (m <= n || !isPrime(m)) {
    cout << "NO";
    return 0;
  }

  while (1) {
    ++n;
    if (isPrime(n)) {
      break;
    }
  }
  if (n == m)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
