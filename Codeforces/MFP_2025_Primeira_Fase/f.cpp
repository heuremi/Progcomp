#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, p, k;
    cin >> n >> p >> k;
    
    vector<int> jugadores(n-1);
    int add = 0;
    for(int i = 0; i < n-1; i++){
        if(i+1 == p) add = 1;
        jugadores[i] = i+1+add;
    }
    
    int pos = ((p - 1) + (k % (n - 1))) % (n - 1);
    cout << jugadores[pos] << endl;
 
    return 0;
}