#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string word;
  cin >> word;
  int lowerCount = 0, upperCount = 0;
  for (char ch : word) {
    if (isupper(ch))
      upperCount++;
    else
      lowerCount++;
  }
  if (upperCount > lowerCount) {
    transform(word.begin(), word.end(), word.begin(), ::toupper);
  } else {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
  }
  cout << word;
  return 0;
}
