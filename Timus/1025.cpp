// 1025. Democracy in Danger
// https://acm.timus.ru/problem.aspx?space=1&num=1025

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    priority_queue<int, vector<int>, greater<int>> valores;
    
    for(int i = 0; i < k; i++){
        int num;
        cin >> num;
        valores.push(num);
    }
    int cont = 0;
    for(int i = 0; i < (k+1)/2; i++){
        cont += (valores.top()+1) / 2;
        valores.pop();
    }
    cout << cont << endl;
    
    return 0;
}