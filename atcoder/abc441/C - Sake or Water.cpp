#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    long long x;
    cin >> n >> k >> x;
    int count = 0;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end());
    int group = n - k + 1;
    long long sum = nums[n-group];
    while(group < n){
        if(sum < x){
            group++;
            sum += nums[n-group];
         }else if(sum >= x){
             cout << group;
             return 0;
         }
    }
    if(sum >= x){
        cout << group;
    }else{
        cout << -1;
    }
    return 0;
}
