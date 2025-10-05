#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int b;
        cin >> b;
        string a;
        cin >> a;
        if(b != 5){
            cout << "NO\n";
            continue;
        }
        map<char,int> values;
        for(auto i: a){
            values[i]++;
        }
        
        if(values['T'] == 1 && values['i'] == 1 && values['m'] == 1 && values['u'] == 1 && values['r'] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}