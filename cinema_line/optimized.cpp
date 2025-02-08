
#include <bits/stdc++.h>
using namespace std;

bool canSellTickets(vector<int> &bills) {
    int count25 = 0, count50 = 0;

    for (int bill : bills) {
        if (bill == 25) {
            count25++;
        } else if (bill == 50) {
            if (count25 > 0) {
                count25--;
                count50++;
            } else {
                return false; 
            }
        } else { // bill == 100
            if (count50 > 0 && count25 > 0) {
                count50--; 
                count25--; 
            } else if (count25 >= 3) {
                count25 -= 3; 
            } else {
                return false; 
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> bills(n);
    for (int i = 0; i < n; i++) {
        cin >> bills[i];
    }

    cout << (canSellTickets(bills) ? "YES" : "NO") << endl;
    return 0;
}

