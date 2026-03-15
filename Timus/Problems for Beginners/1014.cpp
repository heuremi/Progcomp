// 1014. Product of Digits
// https://acm.timus.ru/problem.aspx?space=1&num=1014
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> valores;
    if(n == 0){
        cout << 10 << endl;
        return 0;
    }
    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 9; i >= 2; i--){
        if(n % i == 0){
            n /= i;
            valores.push_back(i);
            i++;
        }
    }
    sort(valores.begin(), valores.end());
    if(n != 1) cout << -1 << endl;
    else {
        for(auto a : valores) cout << a;
        cout << endl;
    }
    
    return 0;
}