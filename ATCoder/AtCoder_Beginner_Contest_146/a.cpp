// https://atcoder.jp/contests/abc146/tasks/abc146_a
// A - Can't Wait for Holiday

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    
    if(t == "SUN") cout << "7\n";
    else if(t == "MON") cout << "6\n";
    else if(t == "TUE") cout << "5\n";
    else if(t == "WED") cout << "4\n";
    else if(t == "THU") cout << "3\n";
    else if(t == "FRI") cout << "2\n";
    else cout << "1\n";
    
    return 0;
}