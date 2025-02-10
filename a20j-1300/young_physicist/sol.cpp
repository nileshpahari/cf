#include <bits/stdc++.h>
using namespace std;

int main(){
    int xSum=0, ySum=0, zSum=0;
    int forceCount;
    cin >> forceCount;
    int forces[forceCount][3];
    for(int i=0; i<forceCount; i++){
        for(int j=0; j<3; j++){
           cin >> forces[i][j]; 
        }
    }
    for(int z=0; z<forceCount; z++){
        xSum+=forces[z][0];
        ySum+=forces[z][1];
        zSum+=forces[z][2];
    }
    if(!xSum && !ySum && !zSum){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
