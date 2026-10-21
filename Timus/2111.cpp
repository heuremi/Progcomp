// 2111. Plato
// https://acm.timus.ru/problem.aspx?space=1&num=2111

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> val;
    long long total = 0;
    while(n--){
        int a;
        cin >> a;
        total += a;
        val.push_back(a);
    }
    sort(val.begin(), val.end());
    
    long long cont = 0;
    for(auto valor : val){
        cont += total * valor;
        total -= valor;
        cont += total * valor;
    }
    
    cout << cont << endl;
    
    return 0;
}