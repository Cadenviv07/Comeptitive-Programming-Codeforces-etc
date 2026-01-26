
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long c;
    cin >> c;
    long long total = 1;
    long long mod = 1e9 + 7;
    for (int i = 0; i < c; i++){
        total *= 2;
        total %= mod;
    }
    
    cout << total;
    return 0;
}

