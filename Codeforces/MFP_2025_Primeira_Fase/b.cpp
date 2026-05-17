#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grafito, vector<int> &visited, int cont, int index, int &elim){
    visited[index] = cont;
    for(auto u: grafito[index]){
        if(visited[u] == -1){
            dfs(grafito, visited, cont, u, elim);
        } else {
            elim++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grafito(n);
    vector<int> visited(n, -1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        grafito[a-1].push_back(b-1);
        grafito[b-1].push_back(a-1);
    }
    int cont = 0, elim = 0;
    
    for(int i = 0; i < n; i++) {
        if(visited[i] == -1) {
            dfs(grafito, visited, cont, i, elim);
            cont++;
        }
    }
    if(cont == 1 && elim == m){
        cout << "BOM" << endl;
    } else {
        cout << "RUIM " << elim - m << " " << cont-1 << endl;
    }
    
    
    return 0;
}