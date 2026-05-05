#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> costs(n);
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        costs[i] = curr;
    }
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(costs[1] - costs[0]);
    for(int i = 2; i < n; ++i){
        dp[i] = min(abs(costs[i] - costs[i-1]) + dp[i-1], abs(costs[i] - costs[i-2]) + dp[i-2]);
    }
    cout << dp[n-1];
    return 0;
}
