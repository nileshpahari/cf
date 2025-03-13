#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
  int t, sx, sy, ex, ey;
  cin >> t >> sx >> sy >> ex >> ey;
  char north, south, east, west;

  int x = ex - sx;
  int y = ey - sy;
  int nReq = 0;
  int sReq = 0;
  int eReq = 0;
  int wReq = 0;
  int tReq = 0;

  if (x >= 0) {
    eReq = x;
  } else {
    wReq = abs(x);
  }
  if (y >= 0) {
    nReq = y;
  } else {
    sReq = abs(y);
  }

  while ((t--) && (eReq != 0 || wReq != 0 || nReq != 0 || sReq != 0)) {
    char dir;
    cin >> dir;
    if (dir == 'S' && sReq > 0) {
      sReq--;
    } else if (dir == 'N' && nReq > 0) {
      nReq--;
    } else if (dir == 'E' && eReq > 0) {
      eReq--;
    } else if (dir == 'W' && wReq > 0) {
      wReq--;
    }
    tReq++;
  }
  if (eReq != 0 || wReq != 0 || nReq != 0 || sReq != 0) {
    cout << -1;
  } else
    cout << tReq;
  return 0;
}
