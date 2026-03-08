// 1313. Some Words about Sport
// https://acm.timus.ru/problem.aspx?space=1&num=1313

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    int k = 0;
    while(k < n){
        int j = 0;
        for(int i = k; i >= 0; i--){
            cout << matriz[i][j] << " ";
            j++;
        }
       k++; 
    }
    int bajada = n - 1;
    int jFijo = 0;
    while(bajada--){
        jFijo++;
        int j = jFijo;
        for(int i = k-1; i >= jFijo; i--){
                cout << matriz[i][j] << " ";
                j++;
        }
    }
    cout << endl;

    return 0;
}