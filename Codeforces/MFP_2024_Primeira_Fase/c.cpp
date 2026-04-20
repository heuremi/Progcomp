// C. Multiple Long Jumps
// https://codeforces.com/group/9CNwiex6Ir/contest/530454/problem/C
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &arbol, int k, int n){
    if(k > n) return 0;
    
    return arbol[k - 1] + max(func(arbol, (2 * k), n), func(arbol, (2 * k) + 1, n));
}
int main()
{
    int n;
    cin >> n;
    n = pow(2, n) - 1;
    vector<int> arbol(n, 0); 
    
    for(int i = 0; i < n; i++){
        cin >> arbol[i];
    }
    
    cout << func(arbol, 1, n) << endl;
    

    return 0;
}