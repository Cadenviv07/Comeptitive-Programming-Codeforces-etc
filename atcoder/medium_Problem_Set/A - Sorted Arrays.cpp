#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string state = "";
    int count = 1;
    vector<int> nums(n,0);
    cin >> nums[0];
    for(int i = 1; i < n; ++i){
        int curr;
        cin >> curr;
        if(state.length() == 0){
            if(nums[i-1] < curr){
                state = "IN";
            }else if(nums[i-1] > curr){
                state = "DE";
            }
        }else if (state == "DE" && curr > nums[i-1]){
            count++;
            state = "";
        }else if(state == "IN" && curr < nums[i-1]){
            count++;
            state = "";
        }
        nums[i] = curr;
    }

    cout << count;

    return 0;
}
