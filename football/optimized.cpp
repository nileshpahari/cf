//mentioned in the description, there are only two team (and draw doesnt occur)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string t1,t2, team;
    int c1=0, c2=0;
    while(n--){
        cin >> team;
        if(team==t1 || t1.empty()){
            t1=team;
            c1++;
        } else {
            t2=team;
            c2++;
        }
    }
    if(c1>c2) cout << t1;
    else cout << t2;
    return 0;
}
