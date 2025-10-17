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
        
        cout << s.length() << endl;
        for(int i = 1; i <= s.length(); i++) cout << i << " ";
        cout << endl;
    }

    return 0;
}