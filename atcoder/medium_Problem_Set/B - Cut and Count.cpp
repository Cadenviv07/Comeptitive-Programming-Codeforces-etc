#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<char, int> freq;
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n; ++i){
        freq[s[i]]++;
    }
    set<char> left;
    int count = 0;
    int mx = 0;
    for(int i = 0; i < n; ++i){
        if (left.count(s[i])){
            freq[s[i]]--;
            if (freq[s[i]] == 0){
                count--;
            }
            mx = max(mx, count);
        }else{
            left.insert(s[i]);
            freq[s[i]]--;
            if (freq[s[i]] != 0){
                count++;
            }
            mx = max(mx, count);
        }
    }
    cout << mx;

    return 0;
}
