// 1545. Hieroglyphs
// https://acm.timus.ru/problem.aspx?space=1&num=1545

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<char, vector<string>> letras;
    
    while(n--){
        string s;
        cin >> s;
        letras[s[0]].push_back(s);
    }
    
    char m;
    cin >> m;
    
    for(auto a : letras[m]){
        cout << a << endl;
    }

    return 0;
}