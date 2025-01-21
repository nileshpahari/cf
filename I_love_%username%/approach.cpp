#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, worstAmazing = 0, bestAmazing = 0;
  int flagBest = 0, flagWorst = 0, flag3=0, flag4=0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int j = 0; j < n; j++) {
    if (j == 0) {
      continue;
    } else {
      for (int k = 0; k < j; k++) {
        if (!flag4 && ((arr[j] > arr[k]))) {
          flagBest = 1;
          flag3 = 1;
        } else if (!flag3 && (arr[j] < arr[k])) {
          flagWorst = 1;
          flag4 = 1;
        } else {
          flagBest = 0;
          flagWorst = 0;
        }
      }
      if (flagBest) {
        bestAmazing += 1;
      } else if (flagWorst) {
        worstAmazing += 1;
      }
    }
 
  }
  cout << worstAmazing + bestAmazing;
}
