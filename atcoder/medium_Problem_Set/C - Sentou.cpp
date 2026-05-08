#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,t;
    cin >> n >> t;

    long long total = t;
    vector<long long> nums(n);
    for(int i = 0; i < n; ++i){
        long long curr;
        cin >> curr;
        nums[i] = curr;
    }
    sort(nums.begin(), nums.end());
    long long localMax = 0;
    long long localMin = 0;
    for(int i = 1; i < n; ++i){
        if(nums[i] - nums[i-1] < t){
            localMax = nums[i];
            if(i == n - 1){
                total += localMax - localMin;
            }
        }else{
            if(localMax > 0){
                total += localMax - localMin;
            }
            total += t;
            localMin = nums[i];
            localMax = 0;
        }
    }
    cout << total;

    return 0;
}


