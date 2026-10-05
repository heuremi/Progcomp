// 1020. Rope
// https://acm.timus.ru/problem.aspx?space=1&num=1020
#include <bits/stdc++.h>
using namespace std;

double dist(pair<double, double> a, pair<double, double> b){
    return sqrt(pow(abs(a.first - b.first), 2) + pow(abs(a.second - b.second), 2));
}
int main()
{
    double n, r;
    cin >> n >> r;
    
    vector<pair<double, double>> coor(n);
    
    for(int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        coor[i] = {a, b};
    }
    
    double acum = dist(coor[n-1], coor[0]);
    for(int i = 0; i < n-1; i++){
        acum += dist(coor[i], coor[i+1]);
    }
    acum += 2 * 3.1415 * r;
    
    cout << fixed << setprecision(2) << acum << endl;

    return 0;
}