#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll convertir(string s){
    ll num = 0;
    int cont = 0;
    for(int i = 0; i < s.length(); i++){
        num += (s[i] - '0') * powl(10, (s.length() > 10 ? 9 - i : s.length() - 1 - i));
        cont++;
        if(cont >= 10) break;
    }
    return num;
}

int main()
{
    string s;
    cin >> s;
    
    ll num = convertir(s);
    map<ll, ll> primos;
    
    for(int i = 2; i <= sqrtl(num); i++){ // > raiz n * log n
        int cont = 0;
        while(num % i == 0){
            cont++;
            num /= i;
        }
        if(cont > 0) primos[i] = cont;
    }
    if(s.length() > 10){
        primos[2] += s.length() - 10;
        primos[5] += s.length() - 10;
    }
    if(num > 1) primos[num]++;
    
    cout << primos.size() << endl;
    for(auto [x, y] : primos) cout << x << " " << y << endl;

    return 0;
}