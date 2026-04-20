// F. Score
// https://codeforces.com/group/9CNwiex6Ir/contest/530454/problem/F
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cant = 0;
    cin >> n;
    
    if(n >= 8){
        cant++;
        n -= 8;
    } if(n >= 4){
        cant++;
        n -= 4;
    } if(n >= 2){
        cant++;
        n -= 2;
    } if(n >= 1) cant++;
    
    cout << cant << endl;
    
    return 0;
}