//souce: GPT
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    int dx = ex - sx, dy = ey - sy;
    string wind;
    cin >> wind;

    for (int i = 0; i < t; i++) {
        if (wind[i] == 'E' && dx > 0) dx--;
        if (wind[i] == 'W' && dx < 0) dx++;
        if (wind[i] == 'N' && dy > 0) dy--;
        if (wind[i] == 'S' && dy < 0) dy++;

        if (dx == 0 && dy == 0) {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
