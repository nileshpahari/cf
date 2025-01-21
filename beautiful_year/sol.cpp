
#include <bits/stdc++.h>
using namespace std;

vector<int> digitsExtractor(int n) {
  vector<int> v;
  while (n > 0) {
    v.emplace_back(n % 10);
    n /= 10;
  }
  return v;
}

bool areDistinct(vector<int> v){
    unordered_set<int> s;
    for(int digit: v){
        if(s.count(digit)){
            return false;
        }
        s.insert(digit);
    }

    return true;
}

int main() {
  int year, nextYear;
  cin >> year;
  int found = 0;
  nextYear = ++year;
  vector<int> digits;
  while (!found) {
    digits=digitsExtractor(nextYear);
    if(areDistinct(digits)){
        found++;
    } else{
    nextYear++;
    }
  }
  cout << nextYear;
}


