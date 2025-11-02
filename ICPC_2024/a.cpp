#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> val;
    for(auto a : s) val.insert(a);
    
    cout << s.length() - val.size() << endl;
    return 0;
}