// 1005. Stone Pile
// https://acm.timus.ru/problem.aspx?space=1&num=1005

#include <bits/stdc++.h>
using namespace std;
int func_min(int t1, int t2, vector<int> val, int pos){
    if(pos >= val.size()) return abs(t1 - t2);
    
    return min(func_min(t1 + val[pos], t2, val, pos+1), func_min(t1, t2 + val[pos], val, pos+1));
}
int main()
{
    int n;
    cin >> n;
    vector<int> val;
    while(n--){
        int a;
        cin >> a;
        val.push_back(a);
    }
    cout << func_min(0, 0, val, 0) << endl;
    
    return 0;
}