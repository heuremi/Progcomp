// 1877. Bicycle Codes
// https://acm.timus.ru/problem.aspx?space=1&num=1877

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int primero, segundo;
    cin >> primero >> segundo;
    
    if(primero % 2 == 0 || segundo % 2 == 1) cout << "yes\n";
    else cout << "no\n";

    return 0;
}