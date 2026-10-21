// 1149. Sinus Dances
// https://acm.timus.ru/problem.aspx?space=1&num=1149
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = n;
    for(int i = 0; i < n-1; i++) cout << "(";
    for(int j = 1; j <= n; j++){
        int cant = 1;
        while(cant <= j){
            cout << "sin(" << cant;
            if(cant < j){
                cout << (cant % 2 == 0 ? "+" : "-");
            }
            cant++;
        }
        for(int i = 0; i < j; i++) cout << ")";
        cout << "+" << sum;
        sum--;
        if(j < n) cout << ")";
    }

    return 0;
}