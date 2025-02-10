#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<string, int> freqMap;
    while(n--){
        string team;
        cin >> team;
        freqMap[team]++;
    }
    int maxCount = 0;
    string winner;
    for(auto teamRecord: freqMap){
        if(teamRecord.second>maxCount){
            winner=teamRecord.first;
            maxCount=teamRecord.second;
        }
    }
    cout << winner;
    return 0;
}
