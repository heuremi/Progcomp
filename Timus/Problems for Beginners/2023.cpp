// 2023. Donald is a postman
// https://acm.timus.ru/problem.aspx?space=1&num=2023

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> cero = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"};
    set<string> uno = {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"};
    set<string> dos = {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};
    
    int n;
    cin >> n;
    int cont = 0;
    int act = 0;
    
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        
        if(cero.count(a)){
            cont += abs(act - 0);
            act = 0;
        } else if(uno.count(a)){
            cont += abs(act - 1);
            act = 1;
        }else{
            cont += abs(act - 2);
            act = 2;
        }
    }
    cout << cont << endl;
    
    return 0;
}