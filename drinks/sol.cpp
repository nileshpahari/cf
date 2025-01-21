#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double avg=0, sum=0;
    for(int i=0; i<n; i++){
        int volumeFraction;
        cin >> volumeFraction;
        sum+=volumeFraction;
    }
    avg=sum/n;
    cout << fixed << setprecision(4) << avg;

    return 0;
}
