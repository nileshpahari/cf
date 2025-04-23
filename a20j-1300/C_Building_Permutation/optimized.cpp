//source: editorial
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vip;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve(){
    int n;
    cin >> n;
    vi an(n);
    long long moves=0;
    rep(i, 0 , n){
        cin >> an[i];
    }
    sort(an.begin(), an.end());
    int k = 1;
    rep(j, 0, n){
        moves += abs(an[j]-k);
        ++k;
    }
    cout << moves;
}

int main(){
    fastio();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
