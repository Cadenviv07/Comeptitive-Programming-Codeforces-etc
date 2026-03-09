#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int start;
    cin >> start;
    vector<int> nums;
    for(int i = 0; i < 8; ++i){
        int curr;
        cin >> curr;
        nums.push_back(curr);
    }
    int a1 = 0;
    int b1 = 0;
    
    for(int i = 0; i <= start; i++){
        bool test = true;
        int a1 = i;
        int b1 = start - a1;
        int b2 = nums[0] - a1;
        int b3 = nums[1] - a1;
        int a2 = nums[2] - b1;
        int a3 = nums[5] - b1;
        if (a2 + b2 != nums[3]){
            test = false;
        }else if(a2 + b3 != nums[4]){
            test = false;
        }else if (a3 + b2 != nums[6]){
            test = false;
        }else if(a3 + b3 != nums[7]){
            test = false;
        }
        if(test){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}


