// 2149. Pigeonhole Principle
// https://acm.timus.ru/problem.aspx?space=1&num=2149

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string line1, line2, line3;
    cin >> line1 >> line2 >> line3;
    vector<bool> isRight;

    for(auto a : line1){
        if(a == '>'){
            isRight.push_back(true);
        } else if(a == '<'){
            isRight.push_back(false);
        }
    }
    
    int derMitad1 = 0, izqMitad1 = 0, derMitad2 = 0, izqMitad2 = 0;
    int derPar = 0, izqPar = 0, derImpar = 0, izqImpar = 0;
    
    for(int i = 0; i < n; i++) {
        if(i < n/2) {
            if(isRight[i]) derMitad1++;
            else izqMitad1++;
        } else {
            if(isRight[i]) derMitad2++;
            else izqMitad2++;
        }
        if(i % 2 == 0){
            if(isRight[i]) derPar++;
            else izqPar++;
        } else {
            if(isRight[i]) derImpar++;
            else izqImpar++;
        }
    }
    int minimoMitad = min(derMitad1 + izqMitad2, izqMitad1 + derMitad2);
    int minimoParidad = min(izqPar + derImpar, izqImpar + derPar);
    
    cout << min(minimoMitad, minimoParidad) << endl;
    
    return 0;
}