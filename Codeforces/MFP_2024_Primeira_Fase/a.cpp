#include <bits/stdc++.h>
using namespace std;
#define int long long

bool foo(vector <int> &repartidores, int mid, int pizzas){
    int suma = 0;
    for(int i = 0; i < repartidores.size(); i++){
        suma += mid / repartidores[i];
        if(pizzas <= suma) return true;
    }
    return false;
}

signed main()
{
    int n, p;
    cin >> n >> p;
    vector<int> repartidores(n);
    
    for(int i = 0; i < n; i++){
        cin >> repartidores[i];
    }
    
    // busqueda l = 0, r = 1e18
    int l = 0, r = 1e18;
    while(l < r){
        int mid = (l + r) / 2;
        
        if(foo(repartidores, mid, p)){
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    
    cout << r << endl;

    return 0;
}