#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int l = -1;
        int mx = 0;
        int r = 0;
        vector <int> nums;
        for(int k = 0; k < n; k++){
            int curr;
            cin >> curr;
            nums.push_back(curr);
            if (l == -1 && curr != (n - k)){
                l = k;   
            }else if ( l != -1 && curr > mx){
                mx = curr;
                r = k;
            }
        }
        if ( l != -1){
            reverse(nums.begin() + l, nums.begin() + r + 1);
        }

        for(int j = 0; j < n; j++){
            cout << nums[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
