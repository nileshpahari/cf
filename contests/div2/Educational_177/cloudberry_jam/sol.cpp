#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int amount = n*3;
        int reqJam = ((4*amount)/3)/2;
        cout << reqJam << '\n';
    }
    return 0;
}