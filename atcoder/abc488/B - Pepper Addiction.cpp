#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    map<int,int> pepper;
    for(int i = 1; i <= m; ++i){
        cin >> pepper[i];
    }
    long long total = 0;
    for(int i = 0; i < n; ++i){
        int t,b;
        cin >> t >> b;
        if(b <= pepper[t]){
            pepper[t] -= b;
            total += b;
        }else{
            total += pepper[t];
            pepper[t] = 0;
        }
    }
    cout << total;

    return 0;
}
