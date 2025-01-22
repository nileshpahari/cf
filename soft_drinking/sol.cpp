#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >>  n >>  k >>  l >>  c >>  d >>  p >>  nl >>  np;
    int totalQtyDrink = k*l;
    int sufficientDrink = totalQtyDrink/nl;
    int sufficientSalt = p/np;
    int sufficientSlices = c*d;
    cout <<  min(sufficientDrink, min(sufficientSalt, sufficientSlices))/n;
    return 0;
}
