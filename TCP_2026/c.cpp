// C - Cumpleaños Masivo
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    map<int, int> numeros;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        numeros[num]++;
    }
    priority_queue<int> momo;
    for(auto a : numeros){
        momo.push(a.second);
    }
    
    int uno = 0, dos = 0, tres = 0;
    
    while(!momo.empty()){
        int act = momo.top();
        if(uno == 0) uno += act;
        else if(dos == 0) dos += act;
        else if(tres == 0) tres += act;
        else {
            while(act--){
                if(uno < dos && uno < tres) uno++;
                else if(dos < tres) dos++;
                else tres++;
            }
        }
        momo.pop();
    }
    
    cout << min(min(uno, dos), tres) << endl;
 
    return 0;
}