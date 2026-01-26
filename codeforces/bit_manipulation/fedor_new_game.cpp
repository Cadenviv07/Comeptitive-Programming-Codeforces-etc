
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;
    vector<int> players;
    int output = 0;

    for (int i = 0; i <m; i++){
        int val;
        cin >> val;
        players.push_back(val);
    }
    
    int fedor;
    cin >> fedor;
    
    for (int num: players){
        int bit = num ^ fedor;
        int differences = __builtin_popcount(bit);
        if ( differences <= k){
            output += 1;
        }
    }
    
    cout << output;
    
    return 0;
}
