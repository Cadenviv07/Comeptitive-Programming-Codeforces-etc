#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    map<int, int> index;
    vector<int> freq;
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        if(!index.count(curr)){
            index[curr] = freq.size();
            freq.push_back(curr);
            freq[freq.size() - 1] = 1;
        }else{
            freq[index[curr]] += 1;
        }
    }
    sort(freq.begin(), freq.end());
    int total = 0;
    if(k >= freq.size()){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < freq.size() - k; ++i){
        total += freq[i];
    }
    cout << total;
    return 0;
}
