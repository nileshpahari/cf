#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int count=0, i=0;
    while(n[i]!='\0'){
        if(n[i]=='4' || n[i]=='7'){
            count++;
        }
        i++;
    }
    if(count==4 || count==7){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
