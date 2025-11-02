#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> juguetes(n);
        bool par = false, impar = false;
        for(int i = 0; i < n; i++){
            cin >> juguetes[i];
            if(juguetes[i] % 2 == 0) par = true;
            else impar = true;
        }
        if(par && impar) {
            sort(juguetes.begin(), juguetes.end());
        } 
        for(int i = 0; i < n; i++) cout << juguetes[i] << " ";
        cout << endl;
    }

    return 0;
}