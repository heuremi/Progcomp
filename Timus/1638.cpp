// 1638. Bookworm
// https://acm.timus.ru/problem.aspx?space=1&num=1638

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if(c < d){
        ans += (2 * b) + (d - c - 1) * a + (d - c - 1) * 2 * b;
    } else {
        ans += (2 * b) + (c - d + 1) * a + (c - d - 1) * 2 * b;
    }
    cout << ans << endl;
    return 0;
}