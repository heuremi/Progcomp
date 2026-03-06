// 1197. Lonesome Knight
// https://acm.timus.ru/problem.aspx?space=1&num=1197

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string pos;
        cin >> pos;
        int letra = pos[0] - 'a';
        int num = pos[1] - '1';
        
        int cant = 0;
        if(letra + 1 <= 7 && letra + 1 >= 0 && num + 2 <= 7 && num + 2 >= 0) cant++;
        if(letra + 1 <= 7 && letra + 1 >= 0 && num - 2 <= 7 && num - 2 >= 0) cant++;
        if(letra - 1 <= 7 && letra - 1 >= 0 && num + 2 <= 7 && num + 2 >= 0) cant++;
        if(letra - 1 <= 7 && letra - 1 >= 0 && num - 2 <= 7 && num - 2 >= 0) cant++;
        if(letra + 2 <= 7 && letra + 2 >= 0 && num + 1 <= 7 && num + 1 >= 0) cant++;
        if(letra + 2 <= 7 && letra + 2 >= 0 && num - 1 <= 7 && num - 1 >= 0) cant++;
        if(letra - 2 <= 7 && letra - 2 >= 0 && num + 1 <= 7 && num + 1 >= 0) cant++;
        if(letra - 2 <= 7 && letra - 2 >= 0 && num - 1 <= 7 && num - 1 >= 0) cant++;
        cout << cant << endl;
    }

    return 0;
}