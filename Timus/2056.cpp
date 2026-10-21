// 2056. Scholarship
// https://acm.timus.ru/problem.aspx?space=1&num=2056

#include <iostream>
using namespace std;

int main()
{
    int n;
    double total = 0;
    bool allfive = true;
    bool hasThree = false;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int note;
        cin >> note;
        if(note != 5) allfive = false;
        if(note == 3) hasThree = true;
        total += note;
    }
    
    if(allfive) cout << "Named\n";
    else if(total / n >= 4.5 && !hasThree) cout << "High\n";
    else if(!hasThree) cout << "Common\n";
    else cout << "None\n";

    return 0;
}