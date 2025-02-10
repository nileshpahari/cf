#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nAmazing=0;

    int first;
    cin >> first;
    int best=first;
    int worst=first;
    n-=1;

    while(n--){
        int score;
        cin >> score;
        if(score>best){
            best = score;
            nAmazing++;
        }
        else if (score<worst){
            worst = score;
            nAmazing++;
        }
    }
    cout << nAmazing;
    return 0;
}
