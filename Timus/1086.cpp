// 1086. Cryptography
// https://acm.timus.ru/problem.aspx?space=1&num=1086
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<int> primos;
    int primo = 1;
    while(primos.size() <= 15000){
        bool isPrimo = true;
        for(int i = 2; i <= sqrt(primo); i++){
            if(primo % i == 0){
                isPrimo = false;
                break;
            }
        }
        if(isPrimo) primos.push_back(primo);
        primo++;
    }
    int n;
    cin >> n;
    
    while(n--){
        int val;
        cin >> val;
        
        cout << primos[val] << endl;
    }
    return 0;
}