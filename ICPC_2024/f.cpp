#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int k, n;
    cin >> k >> n;
    
    if(k < ceil(n/3.0) || k > (n+1)/2){
        cout << "*\n";
    } else {
        if(k > n/2){
            for(int i = 0; i < n; i++){
                cout << (i % 2 == 0 ? 'X' : '-'); 
            }
        } else {
            while(n > 0){
                if(k * 3 == n) {
                    cout << "-X-";
                    n-=3;
                } else {
                    cout << "-X";
                    n-=2;
                }
                k--;
            }
        }
        cout << endl;
    }
    return 0;
}