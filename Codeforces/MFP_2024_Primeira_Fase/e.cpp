#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grafito, vector<int> &visited, int cont, int index){
    visited[index] = cont;
    for(auto u: grafito[index]){
        if(visited[u] == -1){
            dfs(grafito, visited, cont, u);
        } 
    }
}

int distance(int x1, int y1, int x2, int y2) {
    return ((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q, d;
    cin >> n >> q >> d;
    
    map<pair<int, int>, int> coordenadas;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        coordenadas[{a, b}] = i;
    }
    
    vector<vector<int>> grafito(n);
    
    for(auto &[x, i]: coordenadas){
        int pos_x = x.first;
        int pos_y = x.second;
        
        for(int dx = pos_x - d; dx <= pos_x + d; dx++){
            for(int dy = pos_y - d; dy <= pos_y + d; dy++){
                if(coordenadas.count({dx, dy}) && distance(pos_x, pos_y, dx, dy) <= d*d){
                    grafito[i].push_back(coordenadas[{dx, dy}]);
                }
            }
        } 
    }
    
    vector<int> visited(n, -1);
    int cont = 0;

    for(int i = 0; i < n; i++) {
        if(visited[i] == -1) {
            dfs(grafito, visited, cont, i);
            cont++;
        }
    }
    
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(visited[a] == visited[b]) cout << "S\n";
        else cout << "N\n";
        
    }
    
    return 0;
}