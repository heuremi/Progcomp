// B - Mirror Math
#include <bits/stdc++.h>
using namespace std;

int nuevoNumero(char num, char mov){
    if(mov == 'S' || num == '8' || num == '1') return num - '0';
    else if(num == '2') return 5;
    else if(num == '5') return 2;
    else if(num == '3' && (mov == 'U' || mov == 'D')) return 3;
    return -1;
}

int main()
{
    string s;
    cin >> s;
    
    string m;
    cin >> m;
    vector<int> val;
    int p = m.size();
    for(int i = 0; i < p; i++){
        int x = nuevoNumero(s[i], m[i]);
        if(x != -1){
            val.push_back(x);
        }
    }
    
    sort(val.begin(), val.end());
    string num = "";
    int n = val.size();
    for(int i = 0; i < n; i++) num += '0' + val[i];
    cout << num;

    return 0;
}