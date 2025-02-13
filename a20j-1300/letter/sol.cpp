#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(char ch: s2){
        auto t = s1.find(ch);
        if(ch && t==string::npos){
            cout << "NO";
            return 0;
        }
        s1[t]=' ';
    }
    cout << "YES";
    return 0;
}
