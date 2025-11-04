#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        
        for(int i = 0; i < n; i++) cin >> nums[i];
        bool found = false;
        int val;
        for(val = 2; val < 10e18; val++){
            for(int j = 0; j < n; j++){
                if(__gcd(nums[j], val) == 1){
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(found) cout << val << endl;
        else cout << -1 << endl;
    }
 
    return 0;
}