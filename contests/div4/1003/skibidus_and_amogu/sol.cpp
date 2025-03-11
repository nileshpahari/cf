#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string w;
        cin >> w;
        w.pop_back();
        w[w.length()-1]='i';
        cout << w << '\n';
    }
    return 0;
}
