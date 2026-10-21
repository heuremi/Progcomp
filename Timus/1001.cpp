// 1001. Reverse Root
// https://acm.timus.ru/problem.aspx?space=1&num=1001

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    stack<long long> pilita; 
    while(cin >> a){
        pilita.push(a);
    }
    
    while(!pilita.empty()){
        cout << fixed << setprecision(4) << sqrt(pilita.top()) << endl;
        pilita.pop();
    }

    return 0;
}