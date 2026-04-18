// 1618. Trailing Zeros
// https://cses.fi/problemset/task/1618/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long mult = 1;
    int cant = 0; 
    while(mult < n){
        mult *= 5;
        cant += n / mult;
    }
    
    cout << cant << endl;

    return 0;
}