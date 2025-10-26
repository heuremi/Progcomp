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
        
        vector<int> mish;
        
        for(int a = 0; a < s.length(); a++){
            if(s[a] == '0') mish.push_back(a+1);
        }
        
        cout << mish.size() << endl;
        for(int i = 0; i < mish.size(); i++){
            cout << mish[i] << " ";
        }
        cout << endl;
    }

    return 0;
}