// 1083. Factorials!!!
// https://acm.timus.ru/problem.aspx?space=1&num=1083

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string b;
    cin >> b;
    int k = 0;
    for(auto a : b) k++;
    
    int n2 = n;
    long long resMult = 1;
    while(n2 > k){
        resMult *= n2;
        n2 -= k;
    }
    if(n % k == 0) resMult *= k;
    else resMult *= n % k;
    
    cout << resMult << endl;
    
    return 0;
}