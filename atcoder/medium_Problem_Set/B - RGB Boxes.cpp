#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int r,g,b,n;
    cin >> r >> g >> b >> n;
    long long count = 0;
    for(int i = 0; i <= n/r; ++i){
        int rB = r*i;
        for(int j = 0; j<=n/g; ++j){
            int gB = g*j;
            int curr = n - rB - gB;
            if(curr%b == 0 && curr >= 0){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}

