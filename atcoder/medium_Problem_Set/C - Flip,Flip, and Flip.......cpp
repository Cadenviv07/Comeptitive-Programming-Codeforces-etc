#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;
    long long total = n * m;
    total -= m*2;
    total -= (n-2)*(2);

    if(n == 1 && m == 1){
        cout << 1;
        return 0;
    }

    if(m == 1 || n == 1){
        cout << max(m,n) - 2;
    }else{
        cout << total;
    }

    return 0;
}
