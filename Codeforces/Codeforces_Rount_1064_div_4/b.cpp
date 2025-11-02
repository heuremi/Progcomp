#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        map<char, int> ap;
        for(auto a : s) ap[a]++;
        
        string t;
        cin >> t;
        map<char, int> app;
        for(auto b : t) app[b]++;
        
        if(ap == app) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}