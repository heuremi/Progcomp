// 2138. The Good, the Bad and the Ugly
// https://acm.timus.ru/problem.aspx?space=1&num=2138

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    
    ll n;
    cin >> n;
    
    ll digit1 = n / (256*256*256);
    n = n % (256*256*256);
    ll digit2 = n / (256*256);
    n = n % (256*256);
    ll digit3 = n / 256;
    ll digit4 = n % 256;
    
    cout << (256*256*256) * digit4 + (256*256) * digit3 + 256 * digit2 + digit1 << endl;
    
    return 0;
}