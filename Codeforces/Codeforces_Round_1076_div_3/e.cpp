// E - Product Queries
// https://codeforces.com/contest/2193/problem/E

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> dp(n+1, INT_MAX);
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            dp[a] = 1;
        }
        for(int i = 1; i <= n; i++) {
            for(int d = 2; d * d <= i; d++){
                if(i % d == 0){
                    int d1 = d;
                    int d2 = i / d;
                    if(dp[d1] != INT_MAX && dp[d2] != INT_MAX){
                        dp[i] = min(dp[i], dp[d1] + dp[d2]);
                    }
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            if(dp[i] >= INT_MAX) cout << -1 << " ";
            else cout << dp[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}