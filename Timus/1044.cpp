// 1044. Lucky Tickets. Easy!
// https://acm.timus.ru/problem.aspx?space=1&num=1044

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    n /= 2;
    vector<int> sumas(37, 0);
    
    for(int i = 0; i < pow(10, n); i++){
        int sumaActual = 0;
        int num = i;
        while(num > 0){
            int digit = num % 10;
            sumaActual += digit;
            num /= 10;
        }
        sumas[sumaActual]++;
    }
    
    int acum = 0;
    for(int i = 0; i < pow(10, n); i++){
        int sumaActual = 0;
        int num = i;
        while(num > 0){
            int digit = num % 10;
            sumaActual += digit;
            num /= 10;
        }
        acum += sumas[sumaActual];
    }
    
    cout << acum << endl;

    return 0;
}