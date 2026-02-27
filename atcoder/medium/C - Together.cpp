#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int,int> freq;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        freq[curr]++;
        freq[curr-1]++;
        freq[curr+1]++;
    }
    int mx = 0;
    
    for(const auto& [key,value]: freq){
        mx = max(mx, value);
    }
    cout << mx;

    return 0;
}
