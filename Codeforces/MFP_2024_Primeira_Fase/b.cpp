// B. Mushrooms
// https://codeforces.com/group/9CNwiex6Ir/contest/530454/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    int xmin = 999999, xmax = -999999;
    for(int i = 0; i < 4; i++){
       cin >> x >> y; 
       if(x < xmin) xmin = x;
       if(x > xmax) xmax = x;
    }
    int res = abs(xmin - xmax);
    cout << res * res << endl;

    return 0;
}