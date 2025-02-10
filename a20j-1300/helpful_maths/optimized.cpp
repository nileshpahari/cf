//GPT, optmized code. (just counts the no of occurences of 1,2 and 3 and prints accordingly, without the need of multiset to arrange)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int oneCounter, twoCounter, threeCounter;
    oneCounter=twoCounter=threeCounter=0;
    string sum, modifiedString;
    cin >> sum;
    for(char c: sum){
        if(c=='1') oneCounter++;
        else if(c=='2') twoCounter++;
        else threeCounter++;
    }
    for(int i=1; i<=oneCounter; ++i) modifiedString+= "1+";
    for(int j=1; j<=twoCounter; ++j) modifiedString+= "2+";
    for(int k=1; k<=threeCounter; ++k) modifiedString+= "3+";

    if(!modifiedString.empty()) modifiedString.pop_back();
    cout << modifiedString;
    return 0;
}
