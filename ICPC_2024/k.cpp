#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    
    string s;
    cin >> s;
    
    char ant = s[0];
    int contAct = 1;
    int movs = 0;
    
    if(k == 2){
        int mov1 = 0, mov2 = 0;
        string s1 = s, s2 = s;
        for(int i = 1; i < s1.length(); i++){
            if(s1[i] == ant) {
                s1[i] = (ant == '0' ? '1' : '0');
                mov1++;
            } 
            ant = s1[i];
        }
        for(int i = s.length() - 1; i >= 0; i--){
            if(s2[i] == ant) {
                s2[i] = (ant == '0' ? '1' : '0');
                mov2++;
            } 
            ant = s2[i];
        }
        if(mov1 < mov2) cout << mov1 << " " << s1 << endl;
        else cout << mov2 << " " << s2 << endl;
    } else {
        for(int i = 1; i < s.length(); i++){
            if(s[i] == ant) contAct++;
            else {
                ant = (ant == '0' ? '1' : '0');
                contAct = 1;
            }
            if(contAct == k){
                if(i+1 < s.length() && s[i+1] != s[i]){
                    s[i-1] = (ant == '0' ? '1' : '0');
                } else {
                    s[i] = (ant == '0' ? '1' : '0');
                    ant = s[i];
                }
                movs++;
                contAct = 1;
            }
        }
        cout << movs << " " << s << endl;
    }

    return 0;
}