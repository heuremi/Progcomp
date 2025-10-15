// https://atcoder.jp/contests/abc146/tasks/abc146_c
// C - Buy an Integer
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calcularValor(ll a, ll b, int cifras){
    ll posible_n = (cifras == 1 ? 1 : powl(10, (cifras-1)));
    return (a * posible_n) + (b * cifras); 
}

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    
    string x_string = to_string(x);
    int cifras = x_string.length();
    
    while(cifras > 0){
        if(calcularValor(a, b, cifras) <= x){
            ll n = (x - (b*cifras)) / a;
            if(n >= 10e9) {
                cout << 1000000000 << endl;
            } else {
                cout << n << endl;
            }
            return 0;
        }
        cifras--;
    }
    cout << "0\n";
    return 0;
}

    /*
    2 1 100000000000
    
    2N + 1D(N) = 100000000000
    2 * 100000000000 + 1 * 12 = 100000000000
    2 * 10000000000 + 1 * 11 = 10000000000 -> 20000000011 <= 10000000000 -> 11 cifras
    2N + 11 = 100000000000
    n = 99999999989 / 2
    49,999,999,994 > 10e9 -> 10e9
    
    1234 56789 314159265
    
    1234N + 56789D(N) = 314159265
    8 dig -> 10000000
    1234 * 10000000 + 56789 * 8 <= 314159265 -> 12,340,454,312 <= 314,159,265
    
    7 dig -> 1000000
    1234 * 1000000 + 56789 * 7 <= 314159265 -> 1,234,397,523 <= 314,159,265
    
    6 dig -> 100000
    1234 * 100000 + 56789 * 6 <= 314159265 -> 123,740,734 <= 314159265
    
    1234N + 56789 * 6 = 314159265
    1234N + 340,734 = 314,159,265
    1234N = 313,818,531
    N = 254,309
    
    */ 