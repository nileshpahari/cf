#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int length = s1.length();
    for(int i=0; i<length; i++){
        if(s1[i]!=s2[i]){
            cout << '1';
        } else{
            cout << '0';
        }
    }
    return 0;
}
