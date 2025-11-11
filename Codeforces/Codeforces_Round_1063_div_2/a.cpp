#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        bool isValid = true;
        for(int i = 1; i < n - 1; i+=2){
            if(nums[i] != nums[i+1]) isValid = false;
        }
        if(isValid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}