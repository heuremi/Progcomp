// 2142. Magic
// https://acm.timus.ru/problem.aspx?space=1&num=2142

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int aTengo, bTengo, cTengo;
    cin >> aTengo >> bTengo >> cTengo;
    
    int aNecesito, bNecesito, cNecesito;
    cin >> aNecesito >> bNecesito >> cNecesito;
    
    bool posible = true;
    if(aNecesito > aTengo){
        if(aNecesito > aTengo + cTengo) posible = false;
        else cTengo -= (aNecesito - aTengo);
    } 
    if(bNecesito > bTengo){
        if(bNecesito > bTengo + cTengo) posible = false;
        else cTengo -= (bNecesito - bTengo);
    }
    if(aNecesito < aTengo) cTengo += aTengo - aNecesito;
    if(bNecesito < bTengo) cTengo += bTengo - bNecesito;
    if(cTengo < cNecesito) posible = false;
    
    cout << (posible ? "It is a kind of magic" : "There are no miracles in life") << endl;
    return 0;
}