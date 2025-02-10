
#include <bits/stdc++.h>
using namespace std;

int main(){
    string word, result;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    string vowels = "aoyeui";
    for(char ch: word){
        if(vowels.find(ch)==string::npos){
            result.push_back('.');
            result.push_back(ch);
        }
    }
    cout << result;
    return 0;
}
