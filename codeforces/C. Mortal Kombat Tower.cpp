#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n;
        cin >> n;
        vector<int> boss(n);
        for(int j = 0; j < n; ++j){
            cin >> boss[j];
        }

        // 1. Initialize everything to 1e9 (Infinity). 
        // This ensures impossible moves are naturally ignored by the min() function.
        vector<pair<int,int>> dpf(n, {1e9, 1e9});
        vector<pair<int,int>> dpm(n, {1e9, 1e9});

        // USER LOGIC:
        // .first represents "previous turn was friend"
        // .second represents "previous turn was me"

        // 2. Base Case: Friend MUST take the first boss. 
        // It's their first turn, so we treat it as transitioning from me (.second)
        dpf[0].second = boss[0]; 
        // dpm[0] remains {1e9, 1e9} because I cannot take the first boss!

        // 3. The Main Loop (Notice how clean it gets when you rely on 1e9)
        for(int j = 1; j < n; ++j){
            
            // --- MY TURN (Cost is 0 because I can skip without penalty) ---
            
            // I take boss j, previous was friend. I can transition from ANY of my friend's valid states.
            dpm[j].first = min(dpf[j-1].first, dpf[j-1].second);
            
            // I take boss j, previous was ME. I MUST transition from dpm[j-1].first.
            // Why? Because dpm[j-1].first means the boss before that was a friend. 
            // This perfectly prevents a streak of 3!
            dpm[j].second = dpm[j-1].first;

            // --- FRIEND'S TURN (Cost is boss[j] because they must use skip points) ---
            
            // Friend takes boss j, previous was friend. They MUST transition from dpf[j-1].second.
            // This prevents the friend from taking 3 in a row.
            dpf[j].first = dpf[j-1].second + boss[j];
            
            // Friend takes boss j, previous was ME. They can transition from ANY of my valid states.
            dpf[j].second = min(dpm[j-1].first, dpm[j-1].second) + boss[j];
        }

        // 4. Find the minimum of all valid ending states
        int ansM = min(dpm[n-1].first, dpm[n-1].second); 
        int ansF = min(dpf[n-1].first, dpf[n-1].second);
        int ans = min(ansM, ansF);
        
        cout << ans << "\n";
    }

    return 0;
}
