#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<double> nums(n, 0);
    for(int i = 0; i < n; ++i){
        double curr;
        cin >> curr;
        nums[i] = curr;
    }
    int left = 0;
    double maxSum = 0;
    double currSum = 0;
    for(int i = 0; i < n; ++i){
        if(i <= k - 1){
            maxSum += nums[i];
            currSum += nums[i];
        }       
        else if(i > k - 1){
            currSum -= nums[i-k];
            currSum += nums[i];
            if(currSum > maxSum){
                left = i-k+1;
                maxSum = currSum;
            }
        }
    }
    double total = 0.0000000000;
    for(int i = left; i < left + k; ++i){
        total += (((nums[i])*(nums[i]+1))/(2))/nums[i];
    }

    cout << fixed << setprecision(12) << total;

    return 0;
}
