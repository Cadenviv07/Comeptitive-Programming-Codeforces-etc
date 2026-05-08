#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    map<long long, long long> freq;
    vector<long long> nums(n);
    for(int i = 0; i < n; ++i){
        long long curr;
        cin >> curr;
        nums[i] = curr;
        freq[curr]++;
    }
    long long total = 0;
    for(const auto& [key, val]: freq){
        total += ((val)*(val-1))/2;
    }
    for(int i = 0; i < n; i++){
        long long temp = freq[nums[i]];
        total -= temp-1;
        cout << total << "\n";
        total += temp -1;
    }   
    return 0;
}
