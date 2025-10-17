#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> mish(n);
        for(int i = 0; i < n; i++) cin >> mish[i];
        
        int b = *max_element(mish.begin(), mish.end());
        cout << b << endl;
    }

    return 0;
}