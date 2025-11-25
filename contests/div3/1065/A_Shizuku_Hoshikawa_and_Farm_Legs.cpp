#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

#define nl '\n'

void solve(){
   int n;
   cin >> n;
   if(n%2!=0) {
    cout << 0 << nl;
   } else {
    cout << (n/4)+1 << nl;
   }
}

int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}