// more readable soln.
//Deriving the Formula
/*
1) Minimum possible position:
Since at least a people are in front, Petr's position must be at least a + 1 (1-based indexing).

2)Maximum possible position:
Since at most b people are behind him, Petr’s position must be at most n - b.

3)Valid range:
Petr's position can be anywhere from a + 1 to n - b.

4)Total valid positions:
Total positions=(n−b)−(a+1)+1=n−a−b

5)Final answer: min(n−a,b+1) */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << endl;
    return 0;
}
