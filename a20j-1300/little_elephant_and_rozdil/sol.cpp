#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = INT_MAX;
    int index = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int time;
        cin >> time;
        if (time == min)
        {
            flag = true;
        }
        else if (time < min)
        {
            min = time;
            index = i;
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Still Rozdil";
    }
    else
    {
        cout << index + 1;
    }

    return 0;
}
