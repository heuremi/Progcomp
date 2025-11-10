#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int cont = 0;
    for(int i = 0; i < s.length() -1; i++){
        if(s[i] == 'h' && s[i+1] == 'a') cont++;
        if(i <= s.length() - 4){
            if(s[i] == 'b' && s[i+1] == 'o' && s[i+2] == 'o' && s[i+3] == 'o' && s[i+4] == 'o') cont--;
            if(s[i] == 'b' && s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'o') cont += 3;
        }
    }
    cout << cont << endl;

    return 0;
}