// 1068. Sum
// https://acm.timus.ru/problem.aspx?space=1&num=1068

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if(n == 0) cout << "1\n";
    else if(n >= 1) cout << n * (n+1) / 2 << endl;
    else cout << -(abs(n) * (abs(n)+1) / 2) + 1 << endl;

    return 0;
}