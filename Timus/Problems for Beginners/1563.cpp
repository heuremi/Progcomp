// 1563. Bayan
// https://acm.timus.ru/problem.aspx?space=1&num=1563
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int n = stoi(a);
    string t;
    set<string> palabras;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        getline(cin, t);
        if(palabras.count(t)) count++;
        palabras.insert(t);
    }
    cout << count << endl;

    return 0;
}