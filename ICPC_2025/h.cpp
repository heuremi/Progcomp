#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int max = -1;
    int days = 0;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a > max){
            max = a;
            days++;
        }
    }
    cout << days << endl;

    return 0;
}