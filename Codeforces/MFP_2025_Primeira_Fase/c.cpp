// C. El sensor diferente
// https://codeforces.com/group/9CNwiex6Ir/contest/606592/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a != b && a != c) cout << a << endl;
        else if(b != c && a == c) cout << b << endl;
        else cout << c << endl;
    }

    return 0;
}