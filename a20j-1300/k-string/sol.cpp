#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  string word;
  cin >> k >> word;
  int length = word.length();
  vector<int> charList(26, 0);

  if (length % k != 0) {
    cout << -1;
    return 0;
  }

  for (char ch : word) {
    int numeric = ch;
    charList[numeric - 97]++;
  }

  string newSubWord = "";

  for (int i = 0; i < 26; i++) {
    if (charList[i] != 0) {
      if (charList[i] % k != 0) {
        cout << -1;
        return 0;
      }
      newSubWord += string(charList[i] / k, 'a' + i);
    }
  }
  while (k--) {
    cout << newSubWord;
  }

  return 0;
}
