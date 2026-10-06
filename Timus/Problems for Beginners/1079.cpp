// 1079. Maximum
// https://acm.timus.ru/problem.aspx?space=1&num=1079

#include <bits/stdc++.h>
using namespace std;

int valores[100001];

int calc(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else if(n % 2 == 0) return valores[n/2];
    else return valores[n/2] + valores[(n+1)/2];
}

int main()
{
    int maximus[100001];
    maximus[0] = -1;
    for(int i = 1; i < 100001; i++){
        valores[i] = calc(i);
        maximus[i] = max(valores[i], maximus[i-1]);
    }
    
    int n;
    cin >> n;
    
    while(n != 0){
        cout << maximus[n] << endl;
        cin >> n;
    }

    return 0;
}