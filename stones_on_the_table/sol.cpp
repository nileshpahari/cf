#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string row;
    cin >> row;
    int count=0;
    for(int i=0; i<row.size()-1; i++){
        if(row[i]==row[i+1]) count++;
    }
    cout << count;
    return 0;
}
