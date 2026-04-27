#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    vector<long long> nums;
    int remove = 0;
    int start = 0;
    //Sorting too many times?
    for(int i = 0; i < q; ++i){
        long long a, val;
        cin >> a >> val;
        if(a == 1){
            nums.push_back(val);
            cout << nums.size() - remove << "\n";
        }else if(a == 2 && nums.size() > 0){
            sort(nums.begin() + start, nums.end());
            int left = start;
            int right = nums.size()-1;
            int index = -1;
            while(left<right){
                int middle = (left+right)/2;
                if(nums[middle] == val){
                    index = middle;
                    break;
                }else if (nums[middle] > val){
                    right = middle - 1;
                }else{
                    left = middle + 1;
                }
            }
            start = index + 1;
            remove = index+1;
            cout << nums.size() - remove << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
    return 0;
}

