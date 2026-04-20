// G. Basketball Match
// https://codeforces.com/group/9CNwiex6Ir/contest/530454/problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cont1 = 0, cont2 = 0;
    cin >> n;
    string a, b, c;
    while(n--){
        cin >> a >> b >> c;
        if(b == "1") cont1 += c[1] - '0';
        else cont2 += c[1] - '0';
    }
    cout << cont1 << " x " << cont2 << endl;

    return 0;
}