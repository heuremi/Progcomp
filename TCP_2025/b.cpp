// https://codeforces.com/gym/640342
// B - Todo al Rojo
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, t;
    cin >> m >> t;
    
    string s;
    cin >> s;
    vector<bool> rojo(m);
    
    for(int i = 0; i < m; i++){
        cout << "NEGRO\n" << flush;
        string ans; cin >> ans;
        rojo[i] = (ans == "GANASTE" ? false : true);
    }
    
    for(int i = 0; i < t-m; i++){
        if(rojo[i%m]) cout << "ROJO\n" << flush;
        else cout << "NEGRO\n" << flush;
        string ans; cin >> ans;
    }
 
    return 0;
}