// 1837. Isenbaev's Number
// https://acm.timus.ru/problem.aspx?space=1&num=1837

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mapcito;
    vector<vector<int>> vectorcito(n*3);
    vector<int> distancia(n*3, -1);
    int indice = 0;
    int isenbaev = -1;
    for(int i = 0; i < n; i++){
        string a, b, c;
        cin >> a >> b >> c;
        if(!mapcito.count(a)){
            mapcito[a] = indice;
            if(a == "Isenbaev") isenbaev = indice;
            indice++;
        } 
        if(!mapcito.count(b)){
            mapcito[b] = indice;
            if(b == "Isenbaev") isenbaev = indice;
            indice++;
        } 
        if(!mapcito.count(c)){
            mapcito[c] = indice;
            if(c == "Isenbaev") isenbaev = indice;
            indice++;
        }
        
        vectorcito[mapcito[a]].push_back(mapcito[b]);
        vectorcito[mapcito[a]].push_back(mapcito[c]);
        vectorcito[mapcito[b]].push_back(mapcito[a]);
        vectorcito[mapcito[b]].push_back(mapcito[c]);
        vectorcito[mapcito[c]].push_back(mapcito[a]);
        vectorcito[mapcito[c]].push_back(mapcito[b]);
    }
    
    queue<int> nodos;
    if(isenbaev != -1){
        nodos.push(isenbaev);
        distancia[isenbaev] = 0;
        while(!nodos.empty()){
            int papa = nodos.front();
            nodos.pop();
            for(auto a : vectorcito[papa]){
                if(distancia[a] == -1){
                    nodos.push(a);
                    distancia[a] = distancia[papa] + 1;
                }
            }
        }
    }
    
    for(auto a : mapcito){
        cout << a.first << " ";
        if(distancia[a.second] == -1) cout << "undefined\n";
        else cout << distancia[a.second] << endl; 
    }
    return 0;
}