
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        bool swap = false;

        vector<int> nums;
        
        for (int i = 0; i < n; i++){
            cin >> n;
            nums[i] = n;
        }
        
        for(int j = 1; j < n - 1; j++){
            
            if(nums[j - 1] < nums[j] && nums[j] > nums[j+1]){
                swap = true;
            }
         }

        if(swap){
            cout << "YES";
        }else{
            cout << "NO";
        }
    } 

    return 0;
}

