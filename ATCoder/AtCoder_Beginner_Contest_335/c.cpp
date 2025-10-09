// C - Loong Tracking
// https://atcoder.jp/contests/abc335/tasks/abc335_c
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    
    vector<pair<int, int>> pos;
    for(int i = n-1; i >= 0; i--){
        pos.push_back({i+1, 0});
    }
    
    int cont = 0;
    for(int i = 0; i < c; i++){
        int q1;
        cin >> q1;
        if(q1 == 1){
            char q2;
            cin >> q2;
            if(q2 == 'U') pos.push_back({pos[pos.size()-1].first, pos[pos.size()-1].second + 1});
            if(q2 == 'D') pos.push_back({pos[pos.size()-1].first, pos[pos.size()-1].second - 1});
            if(q2 == 'R') pos.push_back({pos[pos.size()-1].first + 1, pos[pos.size()-1].second});
            if(q2 == 'L') pos.push_back({pos[pos.size()-1].first - 1, pos[pos.size()-1].second});
            cont++;
        } else {
            int q2;
            cin >> q2;
            cout << pos[n - q2 + cont].first << " " << pos[n - q2 + cont].second << endl;
        }
        
    }

    return 0;
}