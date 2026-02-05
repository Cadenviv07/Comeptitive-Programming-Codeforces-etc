
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        bool swap = false;

        vector<int> nums(n);
        
        for (int i = 0; i < n; i++){
            
            cin >> nums[i];
        }
        
        if(nums[0] == 1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    } 

    return 0;
}

