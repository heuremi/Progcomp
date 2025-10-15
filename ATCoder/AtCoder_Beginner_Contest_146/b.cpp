// https://atcoder.jp/contests/abc146/tasks/abc146_b
// B - ROT N
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string t;
    cin >> t;
    for(auto a : t){
        char e = 'A' + ((a - 'A' + n) % 26);
        cout << e;
    }
    

    return 0;
}