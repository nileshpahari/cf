#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int passengers=0, minCapacity=0;
    while(n--){
        int exit, enter;
        cin >> exit >> enter;
        passengers= passengers-exit+enter;
        if(passengers>minCapacity){
            minCapacity=passengers;
        }
    }
    cout << minCapacity;

    return 0;
}
