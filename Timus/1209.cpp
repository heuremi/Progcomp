// 1209. 1, 10, 100, 1000...
// https://acm.timus.ru/problem.aspx?num=1209
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while(n--){
        long long num;
        cin >> num;
        if(ceil(sqrt(8*num - 7) == floor(sqrt(8*num - 7)))) cout << "1 ";
        else cout << "0 ";
    }
    cout << endl;

    return 0;
}