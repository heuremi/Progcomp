#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    double pi = acos(0.0) * 2;
    int ang, n;
    cin >> ang >> n;
    vector<pair<double,double>> ubicaciones(n);
    
    for(int i = 0; i < n; i++){
        int pos, alt;
        cin >> pos >> alt;
        double pos2 = alt / (tan((pi * ang)/180.0));
        ubicaciones[i] = {pos, pos + pos2};
    }
    sort(ubicaciones.begin(), ubicaciones.end());
    
    double xMax = ubicaciones[0].second;
    double sum = xMax - ubicaciones[0].first;
 
    for(int i = 1; i < n; i++){
        if(ubicaciones[i].second < xMax) continue;
        else if(ubicaciones[i].first <= xMax){
            sum += (ubicaciones[i].second - ubicaciones[i].first) - (xMax - ubicaciones[i].first);
        } else {
            sum += ubicaciones[i].second - ubicaciones[i].first;
        }
        xMax = ubicaciones[i].second;
    }
    
    cout << fixed << setprecision(13) << sum << endl;
 
    return 0;
}