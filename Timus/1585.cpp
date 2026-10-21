// 1585. Penguins
// https://acm.timus.ru/problem.aspx?space=1&num=1585

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e = 0, m = 0, l = 0;
    cin >> n;
    
    while(n--){
        string a, b;
        cin >> a >> b;
        if(a == "Emperor") e++;
        else if(a == "Little") l++;
        else if(a == "Macaroni") m++;
    }
    
    if(e > m && e > l) cout << "Emperor Penguin" << endl;
    else if(l > m) cout << "Little Penguin" << endl;
    else cout << "Macaroni Penguin" << endl;

    return 0;
}