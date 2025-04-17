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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int d = n-m;
    int shrink = min(d, -l);
    l+= shrink;
    d-=shrink;
    cout << l << " " << r-d << nl;
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
