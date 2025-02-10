//Much optimized approach(using inclusion-exclusion principle), time complexity reduces from O(d) to O(1)

#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate LCM
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int totalDamaged = 0;

    // Add all individual counts
    totalDamaged += d / k;
    totalDamaged += d / l;
    totalDamaged += d / m;
    totalDamaged += d / n;

    // Subtract pairwise overlaps
    totalDamaged -= d / lcm(k, l);
    totalDamaged -= d / lcm(k, m);
    totalDamaged -= d / lcm(k, n);
    totalDamaged -= d / lcm(l, m);
    totalDamaged -= d / lcm(l, n);
    totalDamaged -= d / lcm(m, n);

    // Add triple overlaps
    totalDamaged += d / lcm(k, lcm(l, m));
    totalDamaged += d / lcm(k, lcm(l, n));
    totalDamaged += d / lcm(k, lcm(m, n));
    totalDamaged += d / lcm(l, lcm(m, n));

    // Subtract quadruple overlaps
    totalDamaged -= d / lcm(k, lcm(l, lcm(m, n)));

    cout << totalDamaged << endl;
    return 0;
}
