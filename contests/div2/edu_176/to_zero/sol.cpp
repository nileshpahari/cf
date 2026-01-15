#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int counter = 0;
        cin >> n >> k;
        if ((n % 2) == 1)
        {
            counter = 1 + ceil((double)(n-k) / (k - 1));
        }
        else
        {
            counter = ceil((double)n / (k - 1));
        }
        cout << counter << '\n';
    }
    return 0;
}
