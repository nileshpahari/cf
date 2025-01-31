include <bits/stdc++.h>
using namespace std;

int main() {
  string s, r=" ";
  cin >> s;
//   set<char> charSet(s.begin(), s.end());
//   for (auto it = charSet.begin(); it != charSet.end(); ++it) {
//     if (*it == 'e' && *next(it, 1) == 'h' && *next(it, 2) == 'l' &&
//         *next(it, 3) == 'o') { 
//             cout << "YES";
//             return 0;
//     }
//   }
int flag = 0;
 for(char ch: s){
    if(ch=='l' && flag<2){
        r.push_back(ch);
        flag++;
        continue;
    }
    if(r.find(ch)==string::npos){
        continue;
    }
    r.push_back(ch);
 }
 cout << r;
 for(int i=0; i<r.size(); i++){
    if (r[i]=='h' && r[i+1]=='e' && r[i+2]=='l' && r[i+3]=='o' ) {
        cout << "YES";
        return 0;
    }
 }
  cout << "NO";
  return 0;
}
