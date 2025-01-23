#include <bits/stdc++.h>
using namespace std;

int main() {
  string guest, host, pile;
  cin >> guest >> host >> pile;
  string guestAndHost = guest + host;
  if (guestAndHost.size() != pile.size()) {
    cout << "NO";
    return 0;
  }
  map<char, int> mpp1;
  map<char, int> mpp2;
  for (char ch : guestAndHost) {
    mpp1[ch]++;
  }
  for (char ch : pile) {
    mpp2[ch]++;
  }
  if (mpp1 == mpp2)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
