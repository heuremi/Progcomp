// F
#include <bits/stdc++.h>
#define int long long
using namespace std;


const int MAX = 1e6 + 1;

map<int, int> prime_factorization(int a, vector<int>& primes) {
    map<int, int> m;
    for(int p : primes) {
        int cnt = 0;
        while(a % p == 0) {
            a /= p;
            cnt ++;
        }
        if(cnt > 0) 
            m[p] = cnt;
    }
    if(a > 1) 
        m[a] = 1;
    
    return m;
}

vector<int> get_primes() {
    vector<bool> is_prime(MAX, true);
    is_prime[1] = false;

    for(int p=2; p<MAX; p++) {
        if(is_prime[p]) {
            for(int i=p*p; i<MAX; i+=p) {
                is_prime[i] = false;
            }
        }
    }

    vector<int> primes;
    for(int i=2; i<MAX; i++) {
        if(is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

signed main() {

    string s; cin >> s;
    vector<int> primes = get_primes();
    map<int, int> factorization;

    if(s.size() <= 10) {
        factorization = prime_factorization(stoll(s), primes);
    } else {
        factorization = prime_factorization(stoll(s.substr(0, 10)), primes);
        factorization[2] += (s.size() - 10);
        factorization[5] += (s.size() - 10); 
    }


    cout << factorization.size() << endl;
    for(auto [p, e] : factorization) {
        cout << p << " " << e << endl;
    }

    return 0;
}