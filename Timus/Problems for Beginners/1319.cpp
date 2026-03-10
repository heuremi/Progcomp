// 1319. Hotel
// https://acm.timus.ru/problem.aspx?space=1&num=1319
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int matriz[n][n];
    int val = 1;
    int k = n - 1;
    while(k >= 0){
        int j = k;
        for(int i = 0; j < n; i++){
            matriz[i][j] = val;
            val++;
            j++;
        }
        k--; 
    }
    
    k = 1;
    int jFijo = 0;
    while(k < n){
        int j = jFijo;
        for(int i = k; i <= n - 1; i++){
                matriz[i][j] = val;
                val++;
                j++;
        }
        k++;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}