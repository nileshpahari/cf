//GPT soln: much optimized and quite interesting, not storing the actual state of each cupboard, rather just the counting no of open and closed.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int left_open = 0, left_closed = 0;
    int right_open = 0, right_closed = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        // Count open and closed states for both doors
        if (l == 1) left_open++;
        else left_closed++;
        if (r == 1) right_open++;
        else right_closed++;
    }

    // Minimize operations for each side
    int lsteps = min(left_open, left_closed);
    int rsteps = min(right_open, right_closed);

    // Output the total minimum steps
    cout << lsteps + rsteps << endl;

    return 0;
}
