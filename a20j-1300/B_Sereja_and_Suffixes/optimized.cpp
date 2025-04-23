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
    int n, m;
    cin >> n >> m;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi hash(100001, 0);
    vi distinct(n, 0);
    int distinctCount=0;
    for(int it=n-1; it>=0; it--){
        if(hash[a[it]]==0){
            hash[a[it]]=1;
            distinctCount++;
        } 
            distinct[it]=distinctCount;
    }
    while(m--){
        int l;
        cin >> l;
        l--;
        cout << distinct[l] << nl;
    }
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